#pragma once
#include<iostream>
#include<string>

using namespace std;

//将字符串中的空格替换成*ch
void ReplaceBlack(char Old[],int len,char *ch)//len为Old的总容量
{
	if (Old == NULL || len == 0)
		return;
	int chCount = 0;//实际字符个数
	int blackCount = 0;//空格个数
	int i = 0;
	while (Old[i] != '\0')
	{
		++chCount;
		if (Old[i] == ' ')
			++blackCount;
		++i;
	}
	int chLen = strlen(ch);
	int newLen = chCount + (blackCount - 1)*chLen;//替换后的长度
	if (newLen > len)
	{
		cout << "长度不够！" << endl;
		return;
	}
	int cC = chCount - 1;
	int nL = newLen - 1;
	while (cC < nL)
	{
		if (Old[cC] == ' ')
		{
			int k = chLen - 1;
			while (k >= 0)
				Old[nL--] = ch[k--];
			cC--;
		}
		Old[nL--] = Old[cC--];
	}
}

void Print(char *a)
{
	int i = 0;
	while (a[i] != '\0')
	{
		cout << a[i] << " ";
		++i;
	}
	cout << endl;
}