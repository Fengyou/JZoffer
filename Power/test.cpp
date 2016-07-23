#include"power.h"

void Test()
{
	cout << "pow(0,-1)" << Power(0.0, -1) << endl;
	cout << "pow(0,5)" << Power(0.0, 5) << endl;
	cout << "pow(5,0)" << Power(5.0, 0) << endl;
	cout << "pow(2,3)" << Power(2.0,3)<<endl;

	cout << "------------------------------------" << endl;

	cout << "pow_OP(0,-1)" << Power_OP(0.0, -1) << endl;
	cout << "pow_OP(0,5)" << Power_OP(0.0, 5) << endl;
	cout << "pow_OP(5,0)" << Power_OP(5.0, 0) << endl;
	cout << "pow_OP(2,3)" << Power_OP(2.0, 3) << endl;
}

int main()
{
	Test();

	return 0;
}