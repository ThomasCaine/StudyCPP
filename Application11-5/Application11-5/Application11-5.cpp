#include "stdafx.h"
#include "stdlib.h"
#include <iostream>
using namespace std;
#include "global.h"
#include "fun.h"
#include "student.h"
int main()
{
	Student stu[N];
	cout << "请输入" << N << "个学生的信息（姓名学号成绩）：" << endl;
	for (int i = 0; i < N; i++)
		Input(stu[i]);
	Sum(stu);
	Average(stu);
	for (int i = 0; i < N; i++)
		Output(stu[i]);
	cout << "总成绩" << g_sum << endl;
	cout << "平均成绩：" << g_average << endl;
	system("pause");
    return 0;
}