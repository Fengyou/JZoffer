#pragma once
#include<iostream>
#include<string>

using namespace std;

//���ַ����еĿո��滻��*ch
void ReplaceBlack(char Old[],int len,char *ch)//lenΪOld��������
{
	if (Old == NULL || len == 0)
		return;
	int chCount = 0;//ʵ���ַ�����
	int blackCount = 0;//�ո����
	int i = 0;
	while (Old[i] != '\0')
	{
		++chCount;
		if (Old[i] == ' ')
			++blackCount;
		++i;
	}
	int chLen = strlen(ch);
	int newLen = chCount + (blackCount - 1)*chLen;//�滻��ĳ���
	if (newLen > len)
	{
		cout << "���Ȳ�����" << endl;
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