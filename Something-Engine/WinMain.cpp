// Entry Point
#include <Windows.h>

// Registers window class
int CALLBACK WinMain(
    HINSTANCE   hInstance,
    HINSTANCE   hPrevInstanec,
    LPSTR       lpCmdLine,
    int         nCmdShow)
{
    const wchar_t pClassName[] = L"something3d";
    const wchar_t WindowName[] = L"Something3D";

    WNDCLASSEX wc = { 0 };
    wc.cbSize = sizeof(wc);
    wc.style = CS_OWNDC;
    wc.lpfnWndProc = DefWindowProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = nullptr;
    wc.hCursor = nullptr;
    wc.lpszMenuName = nullptr;
    wc.lpszClassName = pClassName;
    wc.hIconSm = nullptr;
    RegisterClassEx( &wc );

    // Creates window instance
    HWND hWnd = CreateWindowEx(
        0, pClassName,
        WindowName,
        WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
        200, 200, 640, 480,
        nullptr, nullptr, hInstance, nullptr
    );

    // Displays window
    ShowWindow(hWnd, SW_SHOW);
    while (true);

    return 0;
}
