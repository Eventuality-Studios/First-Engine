/**
 * Created By:Rookie
 *
 * Contains the Window Creation code.
 *
 *
 **/
#ifndef __EngineWindow_H__
#define __EngineWindow_H__



#include"windows.h"
class EngineWindow
{


public:
	bool InitializeWind(HINSTANCE pInstance, int pShowWnd, int pWindWidth, int pWindHeight, bool isWindowed,WNDPROC WindProc,HWND pHwND);

};

#endif

