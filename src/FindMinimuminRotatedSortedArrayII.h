#pragma once
#include <vector>
#include <algorithm>

/************************************************************************/
/* 这题与FindMinimuminRotatedSortedArray的区别在于如果num[mid] == num[r]
/* 时，就无法判断最小元素是在mid的左边还是右边，其他的都一样，所以当num[mid]==num[r]
/* 的时候，就要暴力搜索从l到r的所有元素。
/************************************************************************/
class FindMinimuminRotatedSortedArrayII
{
public:
	FindMinimuminRotatedSortedArrayII(){}
	int findMin(std::vector<int> &num)
	{
		int l = 0;
		int r = num.size()-1;
		int ret = num[num.size()-1];

		while(l<=r)
		{
			if (num[l] < num[r])
			{
				//int tmpMin = *(std::min_element(num.begin()+l,num.begin()+r+1));
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
			else if (num[mid] == num[r])
			{
				int tmpMin = *(std::min_element(num.begin()+l,num.begin()+r+1));
				return std::min(ret, tmpMin);
			}
		}
	}
};