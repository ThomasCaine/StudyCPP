// Application8-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
using namespace std;

int main()
{
	char s1[] = "hello";
	char s2[10];
	int i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	cout << s1 << endl;
	cout << s2 << endl;
	cout << sizeof(s2) / sizeof('a')<<" "<<i << endl;
	system("pause");
    return 0;
}

