#pragma once
#include<iostream>

using namespace std;

bool isEven(int n)
{
	return (n & 1) == 0;
}

//调整数组顺序，使奇数位于偶数前
void Adjust(int *arr, int len, bool(*fun)(int))
{
	if (arr == NULL || len <= 0)
	{
		cout << "参数有误！" << endl;
		return;
	}
	int *begin = arr;
	int *end = arr + len - 1;
	while (begin < end)
	{
		if (begin < end && !fun(*begin))
			begin++;
		if (begin < end && fun(*end))
			end--;
		
		if (begin<end)
		{
			int tmp = *begin;
			*begin = *end;
			*end = tmp;
		}
	}
}
