#include"NMax.h"

void Test()
{
	cout << "1到最大的2位数(非递归)："<<endl;
	PrintMaxN(2);
	cout << endl;

	cout << "1到最大的2位数（递归）：" << endl;
	PrintMaxN_R(2);
	cout << endl;
}

int main()
{
	Test();

	return 0;
}