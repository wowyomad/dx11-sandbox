#pragma once

#include "CleanWindows.h"

#include <unordered_map>
class __declspec(dllexport) Window
{
private:
	class WindowClass
	{
	public:
		static const wchar_t* GetName() noexcept;
		static const HINSTANCE GetInstance() noexcept;

	private:
		WindowClass() noexcept;
		~WindowClass() noexcept;
		WindowClass(const WindowClass&) = delete;
		WindowClass operator=(const WindowClass&) = delete;
		static constexpr const wchar_t* wndClassName = L"smol";
		static WindowClass wndClass;
		HINSTANCE hInst;

	};
public:
	Window(int width, int height, const wchar_t* name) noexcept;
	~Window();
	Window(const Window&) = delete;
	Window operator=(const Window&) = delete;

private:
	static LRESULT CALLBACK HandleMsgSetup(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;
	static  LRESULT CALLBACK HandleMsgThunk(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;
	LRESULT HandleMsg(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;

private:
	int width, height;
	HWND hWnd;
};