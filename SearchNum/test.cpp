#include"SearchNum.h"

void Test()
{
	int a[] = { 1, 2, 3, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
	cout << "Find(7£©£¿:"<<SearchNum(a, 4, 4, 7) << endl;
	cout << "Find(5£©£¿:" << SearchNum(a, 4, 4, 5) << endl;;
}

int main()
{
	Test();

	return 0;
}