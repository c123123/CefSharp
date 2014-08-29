// Copyright � 2010-2014 The CefSharp Project. All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be found in the LICENSE file.

#pragma once

#include "Stdafx.h"
#include "include/cef_v8.h"

#include "JavascriptPropertyHandler.h"

using namespace CefSharp::Internals;

namespace CefSharp
{
    public ref class JavascriptPropertyWrapper
    {
    private:
        JavascriptProperty^ _javascriptProperty;
        long _ownerId;

    internal:
        MCefRefPtr<CefV8Value> V8Value;

    public:
        JavascriptPropertyWrapper(JavascriptProperty^ javascriptProperty, long ownerId)
        {
            _javascriptProperty = javascriptProperty;
            _ownerId = ownerId;
        }

        void Bind();
    };
}