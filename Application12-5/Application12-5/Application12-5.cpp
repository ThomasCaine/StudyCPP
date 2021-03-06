#include "stdafx.h"
#include <iostream>
using namespace std;
class IntArray
{
public:
	void infoOfArray()
	{
		cout << "The size of this array is:" << m_size << endl;	
	}
	IntArray(int);
	IntArray();
	~IntArray();
	IntArray(IntArray &);
private:
	int m_size;
	int *m_vector;
};
IntArray::IntArray(int sz)
{
	m_size = sz;
	m_vector = new int(sz);
	cout << "Constructing Array with size " << m_size << endl;
}
IntArray::IntArray()
{
	m_size = 10;
	m_vector = new int(m_size);
	cout << "Constructing Array with size " << m_size << endl;
}
IntArray::~IntArray()
{
	cout << "Destructing Array with size " << m_size << endl;
	delete m_vector;
}
IntArray::IntArray(IntArray &x)
{
	m_size = x.m_size;
	m_vector = new int(m_size);
}

int main()
{
	IntArray x(20), y(x);
	x.infoOfArray();
	y.infoOfArray();
	cout << sizeof(x) << endl;
    return 0;
}