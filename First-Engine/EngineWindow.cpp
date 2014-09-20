#include "EngineWindow.h"

bool EngineWindow::InitializeWind(HINSTANCE pInstance, int pShowWnd, int pWindWidth, int pWindHeight, bool isWindowed,WNDPROC WindProc)
{
	

	WNDCLASSEX WindClass;
	WindClass.cbSize = sizeof(WNDCLASSEX);
	WindClass.style = CS_HREDRAW | CS_VREDRAW;
	WindClass.lpfnWndProc = WindProc;
	WindClass.cbClsExtra = NULL;
	WindClass.cbWndExtra = NULL;
	WindClass.hInstance = pInstance;
	WindClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	WindClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	WindClass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 2);
	WindClass.lpszMenuName = NULL;
	WindClass.lpszClassName = L"First Engine";
	WindClass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	if (!RegisterClassEx(&WindClass))
	{
		MessageBox(NULL, L"Error registering class",
			L"Error", MB_OK | MB_ICONERROR);
		return false;
	}

	gHwND = CreateWindowEx(
		NULL,
		L"First Engine",
		L"First Engine",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT,
		pWindWidth, pWindHeight,
		NULL,
		NULL,
		pInstance,
		NULL
		);

	if (!gHwND)
	{
		MessageBox(NULL, L"Error creating window",
			L"Error", MB_OK | MB_ICONERROR);
		return false;
	}

	ShowWindow(gHwND, pShowWnd);
	UpdateWindow(gHwND);
	return true;
}