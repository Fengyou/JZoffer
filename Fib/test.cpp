#include"Fib.h"

void Test()
{
	int begin = clock();
	cout<< "Fib_R(10):"<<Fib_R(10)<<endl;
	cout << "递归花费："<<clock() - begin << endl;

	int begin1 = clock();
	cout << "Fib(10):" << Fib(10) << endl;
	cout << "非递归花费：" << clock() - begin1 << endl;
}

int main()
{
	Test();

	return 0;
}