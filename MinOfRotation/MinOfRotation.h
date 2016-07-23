#pragma once
#include<iostream>
#include<assert.h>

using namespace std;

int Min(int* arr, int begin, int end)
{
	assert(arr);
	int result = arr[begin];
	for (int i = begin + 1; i <= end; ++i)
	{
		if (result > arr[i])
			result = arr[i];
	}

	return result;
}

int MinOfRotation(int *arr, int length)
{
	assert(arr != NULL);
	assert(length > 0);

	int index1 = 0;
	int index2 = length - 1;
	int indexMid = index1;
	while (arr[index1] >= arr[index2])
	{
		if (index2 - index1 == 1)
		{
			indexMid = index2;
			break;
		}

		indexMid = (index2 + index1) / 2;

		if (arr[index1] == arr[index2] && arr[index1]== arr[indexMid] )//三值相等，顺序查找
			return Min(arr, index1, index2);
		if (arr[index1] <= arr[indexMid])
			index1 = indexMid;
		else if (arr[index2] >= arr[indexMid])
			index2 = indexMid;
	}
	return arr[indexMid];
}