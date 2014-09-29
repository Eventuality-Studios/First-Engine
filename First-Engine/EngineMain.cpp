#include"EngineMain.h"

bool Engine::EngineInit(HINSTANCE hInInstance, WNDPROC pProcFunc, int ShowWnd)
{
	if (Window.InitializeWind(hInInstance, ShowWnd, 1024, 1280, true, pProcFunc,this->EngineHwND))
	{
		return true;
	}	
	else
	{
		return false;
	}
}