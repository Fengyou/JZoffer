#include"MinOfRotation.h"

void Test()
{
	int a[] = { 4, 5, 6, 7, 0, 1, 2, 3 };
	int a1[] = { 4, 5,5, 6,7,0,0, 1, 2, 3 };
	int a2[10] = { };
	int a3[10] = { 1 };

	cout << "�ǿ����ظ���" << MinOfRotation(a, sizeof(a) / sizeof(a[0])) << endl;
	cout <<"�ǿ����ظ���"<< MinOfRotation(a1, sizeof(a1)/sizeof(a1[0])) << endl;
	cout << "ֻ��һ��ֵ��" << MinOfRotation(a2, sizeof(a2) / sizeof(a2[0])) << endl;
	cout << "�����飺" << MinOfRotation(a3, sizeof(a3) / sizeof(a3[0])) << endl;
}

int main()
{
	Test();

	return 0;
}