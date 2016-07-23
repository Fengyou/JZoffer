#pragma once
#include<iostream>

using namespace std;

//判断两个double值是否相等
bool equal(double num1, double num2)
{
	if (num1 - num2 > -0.00001 && num1 - num2 < 0.00001)
		return true;
	else
		return false;
}

//实现库函数pow
//base==0      exponent<1
double Power(double base, int exponent)
{
	if (equal(base,0.0) && exponent<0)
		return -1;
	if (exponent == 1)
		return base;
	int flag = 1;
	int absExponent = (unsigned int)exponent;
	if (exponent < 0)
	{
		absExponent = (unsigned int)(-exponent);
		flag = -1;
	}
	double ret = 1.0;
	while (absExponent--)
		ret *= base;
	if (flag == -1)
		ret = 1.0 / ret;
	return ret;
}
double Power_OP(double base, int exponent)
{
	if (equal(base, 0.0) && exponent < 0)
		return -1;
	if (exponent == 0)
		return 1;
	if (exponent == 1)
		return base;
	double ret = Power_OP(base, exponent >> 1);
	ret *= ret;
	if (exponent & 1 == 1)
		ret *= base;

	return ret;
}