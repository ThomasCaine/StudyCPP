// Application7-7.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
using namespace std;

int main()
{
	int a[] = { 0,2,4,6 };
	int *p = NULL;
	p = a;
	*(p++)=1;
	cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
	cout << p[0] << " " << p[1] << " " << p[2] << " " << p[3] << endl;
	p = a;
	++p[2] = 3;
	cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
	cout << p[0] << " " << p[1] << " " << p[2] << " " << p[3] << endl;
	system("pause");
	
	return 0;
}

