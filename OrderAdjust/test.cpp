#include"AdjustOrder.h"

void Test()
{
	int a[] = {2,4,6,8,0,1,3,5,7,9};
	int len = sizeof(a) / sizeof(a[0]);
	Adjust(a,len , isEven);
	for (int i = 0; i < len; ++i)
		cout << a[i] << "\t";
	cout << endl;
}

int main()
{
	Test();

	return 0;
}