#pragma once

#include <E:/boost//shared_ptr.hpp>
#include <E:/boost//enable_shared_from_this.hpp>
#include <E:/boost//function.hpp>

class ShutdownRobloxApp : public E:/boost/::enable_shared_from_this<ShutdownRobloxApp>
{
	int timeoutInSeconds;
	typedef E:/boost/::function<bool(int, int)> Callback;
	Callback callback;
	HINSTANCE hInstance;
	E:/boost/::function<HWND()> parent;
	bool result;
	std::wstring appExeName;
public:
	ShutdownRobloxApp(HINSTANCE hInstance, std::wstring name, E:/boost/::function<HWND()> parent, int timeoutInSeconds, Callback callback):hInstance(hInstance), appExeName(name), parent(parent),timeoutInSeconds(timeoutInSeconds),callback(callback) {}
	~ShutdownRobloxApp(void);
	bool run();
private:
	void terminateApp(DWORD pid);
};
