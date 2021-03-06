#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2, s3;
	s1 = "The first string";
	cout << s1 << endl;
	s2.assign("The second string");
	cout << s2 << endl;
	s3.assign("123456789", 3);
	cout << s3 << endl;

	s1.swap(s2);
	cout << "s1="<<s1 << endl;
	cout << "s2=" << s2 << endl;
	s2.swap(s1);

	s1.append("is appended with a new string");
	s2.push_back('!');
	cout << s1 << endl;
	cout << s2 << endl;

	s1.insert(0, "begin");
	s2.insert(s2.size()-1, "end");
	cout << s1 << endl;
	cout << s2 << endl;

	s1.erase(0, 6);
	s2.erase(s2.length() - 4, 4);
	cout << s1 << endl;
	cout << s2 << endl;
	s3.clear();
	cout << s3 << endl;

	s1.replace(4, 5, "!!!!!!!!");
	cout << s1 << endl;

	s1 = "abcdefg";
	s2 = "abcdefg";
	if (s1 == s2)
		cout << "s1==s2" << endl;
	s2 = "abcdxyz";
	if (s1 != s2)
		cout << "s1!=s2" << endl;
	if (s1 > s2)
		cout << "s1>s2" << endl;
	if (s1 <= s2)
		cout << "s1<=s2" << endl;
	else
		cout << "s1>s2" << endl;

	if (s3.empty())
		cout << "s3 is empty" << endl;
	else
		cout << "s3 is not empty" << endl;

	s3 = s3 + "ABC";
	cout << s3 << endl;
	s3 += "XYZ";
	cout << s3 << endl;

	cout << "use[]:" << endl;
	for (int i = 0; i < s3.length(); i++)
	{
		cout << s3[i];
	}
	cout << endl;
	cout << "use at():" << endl;
	for (int i = 0; i < s3.length(); i++)
	{
		cout << s3.at(i);
	}
	cout << endl;

	cout << s3.substr(2, 3) << endl;

	s3 = "abcabcabc";
	cout << s3.find("bc", 0) << endl;
	cout << s3.find("bc", 3) << endl;

    return 0;
}