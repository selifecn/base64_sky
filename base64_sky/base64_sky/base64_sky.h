// base64_sky.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cbase64_skyApp:
// �йش����ʵ�֣������ base64_sky.cpp
//

class Cbase64_skyApp : public CWinApp
{
public:
	Cbase64_skyApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cbase64_skyApp theApp;