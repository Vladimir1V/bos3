#include "pch.h"
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	string aa;
	string bb;
	printf_s("Enter program name: \n");
	cin >> aa;
	printf_s("Enter parameters: \n");
	cin >> bb;
	const char* a = aa.c_str();
	const char* b = bb.c_str();	
	ShellExecuteA(0, "open", a, b, NULL, SW_SHOWNORMAL);
	return 0;
}