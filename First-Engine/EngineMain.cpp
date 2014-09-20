#include"EngineMain.h"

bool Engine::EngineInit(HINSTANCE hInInstance, WNDPROC pProcFunc, int ShowWnd)
{
	Window.InitializeWind(hInInstance, ShowWnd, WindWidth, WindHeight, true, pProcFunc);

}