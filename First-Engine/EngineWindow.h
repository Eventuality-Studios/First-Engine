/**
 * Created By:Rookie
 *
 *Contains the Window Creation code.
 *
 *
 **/
#ifndef __EngineWindow_H__
#define __EngineWindow_H__



#include "EngineCommon.h"
class EngineWindow
{
	bool InitializeWind(HINSTANCE pInstance, int pShowWnd, int pWindWidth, int pWindHeight, bool isWindowed,WNDPROC WindProc);

};

#endif