#include <CleanWindows.h>
#include <iostream>
#include <windows.gaming.input.h>
#include <fstream>
#include <iomanip>

#include <sstream>

#include "debug.h"

#include "Window.h"

const auto WINDOW_NAME = L"There's a way bro";

 
int WINAPI wWinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	PWSTR pCmdLine,
	int nCmdShow)
{
	AllocConsole();
	freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);


	Window window = Window(600, 800, WINDOW_NAME);

	MSG msg;
	BOOL gResult;
	while ((gResult = GetMessage(&msg, nullptr, 0, 0)) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	if (gResult == -1)
	{
		return -1;
	}

	return msg.wParam;
	
}
