#pragma once 
#include<iostream>
#include<assert.h>

using namespace std;

//左到右，上到下递增的二维数组中找某一个数
bool SearchNum(int *matrix, int rows,int colums,int num)
{
	assert(matrix);
	if (matrix != NULL && rows > 0 && colums > 0)
	{
		int row = rows - 1;
		int colum = 0;
		while (colum < colums && row >= 0)
		{
			if (matrix[row*colums + colum] == num)
				return true;
			if (matrix[row*colums + colum]>num)
				row--;
			else
				colum++;
		}
		return false;
	}
	return false;
}