#include <Windows.h>
#include <d2d1.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (uMsg == WM_DESTROY) {

		PostQuitMessage(0); return 0;
	}
	DefWindowProc(hwnd, uMsg, wParam, lParam);
};

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR cmd, int cmdShow)
{
	WNDCLASSEX windowClass;
	ZeroMemory(&windowClass, sizeof(WNDCLASSEX));
	windowClass.cbSize = sizeof(WNDCLASSEX);
	windowClass.hbrBackground = (HBRUSH)COLOR_WINDOW;
	windowClass.hInstance = hInstance;
	windowClass.lpfnWndProc = WindowProc;
	windowClass.lpszClassName = "MainWindow";
	windowClass.style = CS_HREDRAW | CS_VREDRAW;
	RegisterClassEx(&windowClass);

	HWND windowHandle = CreateWindowEx(WS_EX_ACCEPTFILES, "MainWindow", "DirectX Tute!", WS_OVERLAPPEDWINDOW, 100, 100, 800, 600, NULL, NULL, hInstance, 0);
	if (!windowHandle) return -1;
	ShowWindow(windowHandle, cmdShow);
	MSG message;
	while (GetMessage(&message, NULL, 0, 0))
	{
		DispatchMessage(&message);
	}
	return 0;
}
//Window to process events
/*
Handle to window
Message to dislay
*/
