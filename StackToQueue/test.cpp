#include"StackToQueue.h"

void Test()
{
	ToQueue<int> tq;
	tq.Push(1);               //�ն��в���
	tq.Print();

	tq.Push(2);               //�ǿն��в���
	tq.Push(3);
	tq.Push(4);
	tq.Print();

	tq.Pop();                //�ǿն���ɾ��
	tq.Print();

	tq.Pop();
	tq.Pop();
	tq.Pop();                //�ǿն���ɾ������
	tq.Print();

	tq.Pop();               //�ն���ɾ��
	tq.Print();
}

int main()
{
	Test();

	return 0;
}