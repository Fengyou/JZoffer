#include"DeleteNode.h"

void Test()
{
	SList sl;
	sl.PushBack(1);
	sl.PushBack(2);
	sl.PushBack(3);
	sl.PushBack(4);
	sl.Print();
	sl.DeleteNode(sl.Find(4));
	cout << "ɾ��4��";
	sl.Print();

	sl.DeleteNode(sl.Find(2));
	cout << "ɾ��2��";
	sl.Print();

	sl.DeleteNode(sl.Find(1));
	cout << "ɾ��1��:";
	sl.Print();

	SList sl2;
	sl2.PushBack(1);
	sl2.Print();
	sl2.DeleteNode(sl2.Find(1));
	sl2.Print();
}

int main()
{
	Test();

	return 0;
}