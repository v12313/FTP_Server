
// FTP_Server.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CFTP_ServerApp: 
// �йش����ʵ�֣������ FTP_Server.cpp
//

class CFTP_ServerApp : public CWinApp
{
public:
	CFTP_ServerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CFTP_ServerApp theApp;