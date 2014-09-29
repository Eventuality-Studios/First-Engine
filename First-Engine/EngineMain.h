/**
 * Created By:Rookie
 *  
 * Contains Engine Starting and Shutting down Functions-Declarations
 * To be used in WinMain.
 *
 **/
#include"EngineWindow.h"

#ifndef __EngineMain_H__
	#define __EngineMain_H__


class Engine
{
	HWND EngineHwND;
	EngineWindow Window;
	public:
		bool EngineInit(HINSTANCE hInInstance,WNDPROC pProcFunc,int ShowWnd);
		void EngineCleanup();
};

#endif

