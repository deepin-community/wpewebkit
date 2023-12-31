/*
 * Copyright (C) 2021-2023 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "WebGPUOrigin3D.h"

#if ENABLE(GPU_PROCESS)

#include "WebGPUConvertFromBackingContext.h"
#include "WebGPUConvertToBackingContext.h"
#include <WebCore/WebGPUOrigin3D.h>

namespace WebKit::WebGPU {

std::optional<Origin3DDict> ConvertToBackingContext::convertToBacking(const WebCore::WebGPU::Origin3DDict& origin3DDict)
{
    return { { origin3DDict.x, origin3DDict.y, origin3DDict.z } };
}

std::optional<Origin3D> ConvertToBackingContext::convertToBacking(const WebCore::WebGPU::Origin3D& origin3D)
{
    return WTF::switchOn(origin3D, [] (const Vector<WebCore::WebGPU::IntegerCoordinate>& vector) -> std::optional<Origin3D> {
        return { { vector } };
    }, [this] (const WebCore::WebGPU::Origin3DDict& origin3DDict) -> std::optional<Origin3D> {
        auto origin3D = convertToBacking(origin3DDict);
        if (!origin3D)
            return std::nullopt;
        return { { WTFMove(*origin3D) } };
    });
}

std::optional<WebCore::WebGPU::Origin3DDict> ConvertFromBackingContext::convertFromBacking(const Origin3DDict& origin3DDict)
{
    return { { origin3DDict.x, origin3DDict.y, origin3DDict.z } };
}

std::optional<WebCore::WebGPU::Origin3D> ConvertFromBackingContext::convertFromBacking(const Origin3D& origin3D)
{
    return WTF::switchOn(origin3D, [] (const Vector<WebCore::WebGPU::IntegerCoordinate>& vector) -> std::optional<WebCore::WebGPU::Origin3D> {
        return { { vector } };
    }, [this] (const Origin3DDict& origin3DDict) -> std::optional<WebCore::WebGPU::Origin3D> {
        auto origin3D = convertFromBacking(origin3DDict);
        if (!origin3D)
            return std::nullopt;
        return { { WTFMove(*origin3D) } };
    });
}

} // namespace WebKit

#endif // ENABLE(GPU_PROCESS)
