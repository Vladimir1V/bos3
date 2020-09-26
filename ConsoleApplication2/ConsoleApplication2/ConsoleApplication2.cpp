#include "pch.h"
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	STARTUPINFOA cif;
	ZeroMemory(&cif, sizeof(STARTUPINFOA));
	PROCESS_INFORMATION pi;
	string aa;
	string bb;
	printf_s("Enter program name with parameters(option): \n");
	cin >> aa;
	string a = aa;
	LPSTR c = (LPSTR)a.c_str();
	CreateProcessA(NULL, c, nullptr, NULL, false, NULL, NULL, NULL, &cif, &pi);
	return 0;
}