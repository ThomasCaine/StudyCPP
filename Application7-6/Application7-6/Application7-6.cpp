// Application7-6.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include "stdlib.h"
using namespace std;
int main()
{
	int a[][3] = { 1,2,3,4,5,6 }, b[][2] = { 7,8,9,10,11,12 };
	int(*p)[3] = NULL, (*q)[2] = NULL;
	p = a;
	q = b;
	cout << p[1][2] << " " << p[0][2] << endl;
	cout << q[0][1] << " " << q[1][1] << " " << q[2][1] << endl;
	cout << &q[0][1] << " " << &q[1][1] << " " << &q[2][1] << endl;
	q = q + 1;
	cout << q[0][1] << " " << q[1][1] << " " << q[2][1] << endl;
	cout << &q[0][1] << " " << &q[1][1] << " " << &q[2][1] << endl;
	system("pause");
	return 0;
}