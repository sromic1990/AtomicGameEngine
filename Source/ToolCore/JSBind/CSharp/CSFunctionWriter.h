//
// Copyright (c) 2014-2015, THUNDERBEAST GAMES LLC All rights reserved
// LICENSE: Atomic Game Engine Editor and Tools EULA
// Please see LICENSE_ATOMIC_EDITOR_AND_TOOLS.md in repository root for
// license information: https://github.com/AtomicGameEngine/AtomicGameEngine
//

#pragma once

#include <Atomic/Container/Str.h>

#include "../JSBFunctionWriter.h"

using namespace Atomic;

namespace ToolCore
{

class JSBPackage;
class JSBFunction;

class CSFunctionWriter : public JSBFunctionWriter
{

public:

    CSFunctionWriter(JSBFunction* function);

    void GenerateSource(String& sourceOut);

    void GenerateNativeSource();
    void GenerateManagedSource();


private:

    void GenNativeFunctionSignature(String& sig);

    void WriteFunction(String& source);
    void WriteConstructor(String& source);
    void WriteParameterMarshal(String& source);

};

}
