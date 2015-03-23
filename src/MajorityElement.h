#pragma once
#include <vector>
class MajorityElement
{
public:
	MajorityElement(){}
	int majorityElement(std::vector<int>& num)
	{
		int* record = new int[num.size()];
		std::memset(record, 0, sizeof(int)*num.size());
		if (num.size()==1)
		{
			return num[0];
		}
		int candidate = num[0];
		int oldCount = -1;
		int oldCandidate;
		for (int i = 0; i < num.size(); i++)
		{

			for (int j = 0; j < num.size(); j++)
			{
				if (!record[j])
				{
					candidate = num[j];
					break;
				}
			}

			int count = 0;
			for (int j = 0; j < num.size(); j++)
			{
				if (record[j])
				{
					continue;
				}
				if (num[j] == candidate)
				{
					count++;
					record[j] = 1;
				}
			}
			if (count > num.size()/2)
			{
				return candidate;
			}
			if (oldCount < count)
			{
				oldCount = count; 
				oldCandidate = candidate;
			}
		}
	}
};