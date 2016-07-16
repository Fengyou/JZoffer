#include"ReplaceBlack.h"

void Test()
{
	char a[30] = "abcd efg hij l";
	char *b = "123";
	ReplaceBlack(a, 30, b);

	Print(a);
}  

int main()
{
	Test();

	return 0;
}