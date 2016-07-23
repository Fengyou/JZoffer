#pragma once
#include<iostream>
#include<mutex>

using namespace std;

//求斐波那契数 斐波那契 0 1 1 2 3 5 ……（第n个数=第n-1个数+第n-2个数）

int Fib_R(int n)
{
	if (n <= 1)
		return n;
	else
		return Fib_R(n - 1) + Fib_R(n - 2);
}

int Fib(int n)
{
	int ret;
	if (n < 1)
		ret = n;
	else
	{
		int front = 0;
		int behind = 1;
		while((n--)>1)
		{
			ret = front + behind;
			front = behind;
			behind = ret;
		}
	}
	return ret;
}