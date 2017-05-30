#include "stdafx.h"
#include "MinHook_Init.h"


MinHook_Init::MinHook_Init(){
	//ȷ����Ŀ¼logs
	CreateDirectory(L"d:\\logs" , NULL);
	myhook_logger = spd::basic_logger_mt("myhook_logger for changcheng" , "d:/logs/hook_logger");
	//��ʼ���쳣����
	log_err_handler();
	CC_HOOKLOG_START;
	// Initialize MinHook.
	if(MH_Initialize() != MH_OK){
		CC_0_FUN_CALL_FAILED("MH_Initialize");
	}

	
}


MinHook_Init::~MinHook_Init(){
	// Uninitialize MinHook.
	if(MH_Uninitialize() != MH_OK){
		CC_0_FUN_CALL_FAILED("MH_Uninitialize");
	}
	CC_HOOKLOG_STOP;
	//�ͷŲ��ر����м�¼��
	spd::drop_all();
}
