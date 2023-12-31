/*
 * Copyright (C) 2020 Apple Inc. All rights reserved.
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
#include "DisplayBoxRareGeometry.h"

#include "RenderStyle.h"

namespace WebCore {
namespace Display {

DEFINE_ALLOCATOR_WITH_HEAP_IDENTIFIER(BoxRareGeometry);

bool BoxRareGeometry::hasBorderRadius() const
{
    return m_borderRadii && !m_borderRadii->isZero();
}

FloatRoundedRect roundedRectWithIncludedRadii(const FloatRect& rect, const FloatRoundedRect::Radii& radii, bool includeLeftEdge, bool includeRightEdge)
{
    FloatRoundedRect::Radii resultRadii;

    if (includeLeftEdge) {
        resultRadii.setTopLeft(radii.topLeft());
        resultRadii.setBottomLeft(radii.bottomLeft());
    }

    if (includeRightEdge) {
        resultRadii.setTopRight(radii.topRight());
        resultRadii.setBottomRight(radii.bottomRight());
    }

    resultRadii.scale(calcBorderRadiiConstraintScaleFor(rect, resultRadii));
    return FloatRoundedRect { rect, resultRadii };
}

FloatRoundedRect roundedInsetBorderForRect(const FloatRect& borderRect, const FloatRoundedRect::Radii& radii, const RectEdges<float>& borderWidth, bool includeLeftEdge, bool includeRightEdge)
{
    auto insetRect = FloatRect { borderRect.x() + borderWidth.left(), borderRect.y() + borderWidth.top(),
        borderRect.width() - borderWidth.left() - borderWidth.right(), borderRect.height() - borderWidth.top() - borderWidth.bottom() };

    if (!radii.isZero()) {
        auto adjustedRadii = radii;
        adjustedRadii.shrink(borderWidth.top(), borderWidth.bottom(), borderWidth.left(), borderWidth.right());
        return roundedRectWithIncludedRadii(insetRect, adjustedRadii, includeLeftEdge, includeRightEdge);
    }

    return FloatRoundedRect { insetRect, { } };
}

} // namespace Display
} // namespace WebCore

