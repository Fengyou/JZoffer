#pragma once 
#include<iostream>
#include<string>

using namespace std;

bool Increment(char* num)
{
	bool isOverflow = false;         //溢出
	int nTakeOver = 0;               //进位
	int len = strlen(num);

	for (int i = len-1; i >= 0; --i)
	{
		int nSum = num[i] - '0' + nTakeOver;
		if (i == len - 1)
			nSum++;
		if (nSum >= 10)
		{
			if (i == 0)
				isOverflow = true;
			else
			{
				nSum -= 10;
				nTakeOver = 1;
				num[i] = '0' + nSum;
			}
		}
		else
		{
			num[i] = '0' + nSum;
			break;
		}
	}
	return isOverflow;
}
void Print(char* num)
{
	bool begin0 = true;
	int len = strlen(num);

	for (int i = 0; i < len; ++i)
	{
		if (begin0 && num[i] != '0')
			begin0 = false;
		if (!begin0)
			printf("%c", num[i]);
	}
	printf("\t");
}
//打印1到n位的最大的数
void PrintMaxN(int n)
{
	if (n <= 0)
		return;
	char *num = new char[n + 1];
	memset(num, '0', n);
	num[n] = '\0';

	while (!Increment(num))
		Print(num);

	delete[] num;
}
void PrintMaxOfN(char* num, int len, int index)
{
	if (index == len - 1)
	{
		Print(num);
		return;
	}

	for (int i = 0; i < 10; ++i)
	{
		num[index + 1] = i + '0';
		PrintMaxOfN(num, len, index + 1);
	}
}
void PrintMaxN_R(int n)
{
	if (n <= 0)
		return;
	char *num = new char[n + 1];
	num[n] = '\0';

	for (int i = 0; i < 10; ++i)
	{
		num[0] = i + '0';
		PrintMaxOfN(num, n, 0);
	}
	delete[] num;
}