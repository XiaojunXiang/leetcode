#pragma once
#include <vector>
#include <algorithm>

/************************************************************************/
/* ������FindMinimuminRotatedSortedArray�������������num[mid] == num[r]
/* ʱ�����޷��ж���СԪ������mid����߻����ұߣ������Ķ�һ�������Ե�num[mid]==num[r]
/* ��ʱ�򣬾�Ҫ����������l��r������Ԫ�ء�
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