#include"EngineMain.h"

bool Engine::EngineInit(HINSTANCE hInInstance, WNDPROC pProcFunc, int ShowWnd)
{
	if (Window.InitializeWind(hInInstance, ShowWnd, WindWidth, WindHeight, true, pProcFunc))
	{
		return true;
	}	
	else
	{
		return false;
	}
}