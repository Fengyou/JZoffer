#pragma once
#include<iostream>

using namespace std;

//����Ӧ��������1��λ��
int NumOf1(int n)
{
	int count = 0;
	while (n)
	{
		++count;
		n = n&(n - 1);//������1&ԭ���������������㣬���м���1  1100->1100&1011-->1000&0111==0(2��1)
	}
	return count;
}