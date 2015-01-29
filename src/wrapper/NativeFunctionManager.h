/**
* Copyright (C) 2015 MK124 & Marvin H
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef _NATIVEFUNCTIONMANAGER_H_
#define _NATIVEFUNCTIONMANAGER_H_

#include <unordered_map>
#include <string>
#include <memory>
#include "AmxInstanceManager.hpp"
#include <algorithm>
#include <functional>
#include <hook/SimpleInlineHook.hpp>

#include "AmxHelper.h"
#include "amx/amx.h"
#include "Callbacks.h"

struct hookedNative {
	AMX_NATIVE originalFunc;
	std::shared_ptr<SimpleInlineHook>* hook;
	std::string funcName;
};

class NativeFunctionManager
{
public:

	static NativeFunctionManager& get();

	NativeFunctionManager();
	~NativeFunctionManager();

	void registerFunction(AMX* amx, std::string name, AMX_NATIVE functionAddr, int index);
	std::map<std::string, hookedNative*> getNatives();
	AMX_NATIVE findFunction(char const *name);
	std::string getFunctionName(int index);
	void hookFunction(AMX* amx, AMX_NATIVE function, const char *name);
	void clearFunctions();

private:
	std::unordered_map<std::string, AMX_NATIVE> functions;
	std::unordered_map<int, std::string> functionNames;
	NativeFunctionManager(const NativeFunctionManager&) = delete;
	NativeFunctionManager& operator= (const NativeFunctionManager&) = delete;
};
#endif