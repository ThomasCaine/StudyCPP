// Application10-4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include <iostream>
using namespace std;
struct student
{
	char num[8];
	char name[10];
	float score[3];
};
void Input(student &s)
{
	cout << "输入学号、姓名和三科成绩：" << endl;
	cin >> s.num >> s.name;
	for (int j = 0; j < 3; j++)
		cin >> s.score[j];
}
void Output(student s)
{
	cout << s.num << " "<<s.name << " ";
	for (int j = 0; j < 3; j++)
		cout << s.score[j];
	cout << endl;
}
float FindMax(student *s, int m, int n)
{
	float maxScore = s[0].score[0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (s[i].score[j] > maxScore)
				maxScore = s[i].score[j];
	return maxScore;
}
int main()
{
	const int N = 3;
	student stu[N];
	int i;
	for (i = 0; i < N; i++)
		Input(stu[i]);
	cout << N << "个学生的信息如下：" << endl;
	for (i = 0; i < N; i++)
		Output(stu[i]);
	float max = FindMax(stu, N, 3);
	cout << "全班最高成绩为：" << max << endl;
	system("pause");
	return 0;
}

