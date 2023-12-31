//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// RendererEAGL.cpp: Implements the class methods for RendererEAGL.

#include "libANGLE/renderer/gl/eagl/RendererEAGL.h"
#include "libANGLE/renderer/gl/eagl/DisplayEAGL.h"

namespace rx
{

RendererEAGL::RendererEAGL(std::unique_ptr<FunctionsGL> functions,
                           const egl::AttributeMap &attribMap,
                           DisplayEAGL *display)
    : RendererGL(std::move(functions), attribMap, display), mDisplay(display)
{}

RendererEAGL::~RendererEAGL() {}

WorkerContext *RendererEAGL::createWorkerContext(std::string *infoLog)
{
    return mDisplay->createWorkerContext(infoLog);
}

}  // namespace rx
