/*
 * Copyright (C) 2023 Igalia S.L.
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
#include "WKEventWPE.h"

WKKeyboardEvent WKKeyboardEventMake(WKEventType type, WKInputType inputType, const char* text, uint32_t length, uint32_t keyCode, uint32_t hardwareKeyCode, uint32_t modifiers)
{
    WKKeyboardEvent keyboardEvent;
    keyboardEvent.type = type;
    keyboardEvent.keyCode = keyCode;
    keyboardEvent.hardwareKeyCode = hardwareKeyCode;
    keyboardEvent.modifiers = modifiers;

    if (length > 0) {
        keyboardEvent.text = text;
        keyboardEvent.length = length;
    } else {
        keyboardEvent.text = nullptr;
        keyboardEvent.length = 0;
    }

    return keyboardEvent;
}

WKMouseEvent WKMouseEventMake(WKEventType type, WKEventMouseButton button, WKPoint position, int32_t clickCount, uint32_t modifiers)
{
    WKMouseEvent mouseEvent;
    mouseEvent.type = type;
    mouseEvent.button = button;
    mouseEvent.position = position;
    mouseEvent.clickCount = clickCount;
    mouseEvent.modifiers = modifiers;
    return mouseEvent;
}

WKWheelEvent WKWheelEventMake(WKEventType type, WKPoint position, WKSize delta, WKSize wheelTicks, uint32_t modifiers)
{
    WKWheelEvent wheelEvent;
    wheelEvent.type = type;
    wheelEvent.position = position;
    wheelEvent.delta = delta;
    wheelEvent.wheelTicks = wheelTicks;
    wheelEvent.modifiers = modifiers;
    return wheelEvent;
}
