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

	bool EngineInit(HINSTANCE hInInstance, HINSTANCE hPrevInstance);
	void EngineCleanup();
};
#endif