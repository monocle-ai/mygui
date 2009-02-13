/*!
	@file
	@author		Albert Semenov
	@date		01/2009
	@module
*/
#pragma once

#include <MyGUI.h>
#include "MMyGUI_Macros.h"
#include "MMyGUI_Marshaling.h"

MMYGUI_BEGIN_NAMESPACE

#ifndef MMYGUI_USING_EXTERNAL_TYPE

public value struct NativePtrHolder
{
	NativePtrHolder( System::IntPtr _pointer, System::Type^ _type) : mPointer(_pointer), mType(_type) { }

public:
	System::IntPtr mPointer;
	System::Type^ mType;
};

#endif // MMYGUI_USING_EXTERNAL_TYPE

MMYGUI_END_NAMESPACE
