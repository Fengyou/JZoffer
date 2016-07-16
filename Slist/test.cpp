#include"SList.hpp"

void Test()
{
	SList<int> l(0);
	l.PushBack(1);
	l.PushBack(2);
	l.PushBack(3);
	l.PushBack(4);
	l.Print();

	l.EndToHead();
	l.Print();

	//l.PrintEndToHead();
}

int main()
{
	Test();

	return 0;
}