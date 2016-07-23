#pragma once
#include<iostream>

using namespace std;

//数对应二进制中1的位数
int NumOf1(int n)
{
	int count = 0;
	while (n)
	{
		++count;
		n = n&(n - 1);//将数减1&原数，能做几次运算，即有几个1  1100->1100&1011-->1000&0111==0(2个1)
	}
	return count;
}