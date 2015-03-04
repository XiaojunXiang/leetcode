#pragma once
#include <vector>
class FindPeakElement
{
public:
	FindPeakElement(){}
	int findPeakElement(const std::vector<int> &num)
	{
		int left = 0;
		int right = num.size()-1;
		while (left != right)
		{
			int mid = (left+right)/2;
			if (num[mid] < num[mid+1])
			{
				left = mid + 1;
			}
			else
			{
				right = mid;
			}
		}
		return left;
	}
};