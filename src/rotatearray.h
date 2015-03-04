#pragma once
#include <iostream>
class  RotateArray
{
public:
	RotateArray(){}
	void rotate(int nums[], int n, int k)
	{
		//method 1
		//k = k % n;
		//if (k == 0)
		//{
		//	return;
		//}
		//int* numsCopy = new int[n];
		//for (int i = 0; i < n; i++)
		//{
		//	numsCopy[(i+k)%n] = nums[i];
		//	
		//}
		//for (int i = 0; i < n; i++)
		//{
		//	nums[i] = numsCopy[i];
		//}
		//delete[] numsCopy;
		
		//method 2-----time limit
		//k = k % n;
		//if (k == 0)
		//{
		//	return;
		//}
		//for (int i = 0; i < k; i ++)
		//{
		//	int tmp = nums[n-1];
		//	for (int j = n-1; j > 0; j--)
		//	{
		//		nums[j] = nums[j-1];
		//		
		//	}

		//	nums[0] = tmp;
		//}

		//method 3 
		/************************************************************************/
		/* 交换顺序，右移k位相当于把前n-1-k位逆置，把n-k位到n-1位逆置，然后再把整个数组逆置                                                                     */
		/************************************************************************/
		k %= n;
		if (k == 0)
		{
			return;
		}
		reverseArray(nums, 0,n-1-k);
		reverseArray(nums,n-k,n-1);
		reverseArray(nums,0,n-1);

	}
protected:
	void reverseArray(int array[], int startIdx, int endIdx)
	{

		for (int i = startIdx; i <= (endIdx+startIdx)/2; i++)
		{
			int tmp = array[i];
			array[i] = array[endIdx-(i-startIdx)];
			array[endIdx-(i-startIdx)] = tmp;
		}
	}
private:
};