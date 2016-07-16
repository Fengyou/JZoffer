#include"StackToQueue.h"

void Test()
{
	ToQueue<int> tq;
	tq.Push(1);               //空队列插入
	tq.Print();

	tq.Push(2);               //非空队列插入
	tq.Push(3);
	tq.Push(4);
	tq.Print();

	tq.Pop();                //非空队列删除
	tq.Print();

	tq.Pop();
	tq.Pop();
	tq.Pop();                //非空队列删除至空
	tq.Print();

	tq.Pop();               //空队列删除
	tq.Print();
}

int main()
{
	Test();

	return 0;
}