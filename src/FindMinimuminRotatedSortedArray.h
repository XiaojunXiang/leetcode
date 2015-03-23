#pragma once
#include <vector>
#include <iostream>

class FindMinimuminRotatedSortedArray
{
public:
	FindMinimuminRotatedSortedArray(){}
	int findMin(std::vector<int>& num)
	{

		//method 1
		//int size = num.size() - 1;
		//int l = 0;
		//int r = size;
		//while(l <= r) {
		//	int mid = l + (r - l) / 2;
		//	if (num[mid] > num[size]) 
		//	{
		//		//left
		//		l = mid + 1;
		//	} 
		//	else 
		//	{
		//		r = mid - 1;
		//	}
		//}
		//return num[l];

		//method2
		int l = 0;
		int r = num.size()-1;
		int ret = num[num.size()-1];

		while(l<=r)
		{
			if (num[l] <= num[r])
			{
				return std::min(ret, num[l]);
			}
			int mid = (l+r)/2;
			if (num[mid] > num[r])
			{
				l = mid+1;
			}
			else if (num[mid] < num[r])
			{
				ret = num[mid];
				r = mid - 1;
			}
		}
	}

};