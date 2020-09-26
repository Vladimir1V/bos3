#include "pch.h"
#include <iostream>
#include <process.h>
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
	_execl(a, b, NULL);
	return 0;
}