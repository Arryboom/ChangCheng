// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include "hook_lib/MinHook.h"
#include "spdlog/spdlog.h"
#include <iostream>
#include <memory>


#include "misc/misc.h"

#include "minhook_init/MinHook_Init.h"


namespace spd = spdlog;

//lib
#if defined _M_X64
#ifdef _DEBUG
#pragma comment(lib, "hook_lib/libMinHook-x64-v140-mdd.lib")
#else
#pragma comment(lib, "hook_lib/libMinHook-x64-v140-md.lib")
#endif

#elif defined _M_IX86
#ifdef _DEBUG
#pragma comment(lib, "hook_lib/libMinHook-x86-v140-mdd.lib")
#else
#pragma comment(lib, "hook_lib/libMinHook-x86-v140-md.lib")
#endif
#endif



