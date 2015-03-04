#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

class LargestNumber
{
public:
	LargestNumber(){}

	std::string largestNumber(std::vector<int> &num)
	{
		//std::sort(num.begin(), num.end(), compare);
		bool flag = true;
		std::vector<std::string> numStrs;
		for (int i = 0; i < num.size(); i++)
		{
			char tmpStr[100];
			std::sprintf(tmpStr, "%d", num[i]);
			numStrs.push_back(std::string(tmpStr));
			if (num[i] != 0)
			{
				flag = false;
			}
		}

		if (flag)
		{
			return std::string("0");
		}

		std::stable_sort(numStrs.begin(), numStrs.end(), compareString);
		std::string ret;
		for (auto it = numStrs.begin(); it != numStrs.end(); it++)
		{
			//std::cout << *it << std::endl;
			ret += *it;
		}
		return ret;

	}

	static bool compareString(std::string aStr, std::string bStr)
	{
		std::string mergeAB = aStr + bStr;
		std::string mergeBA = bStr + aStr;

		return std::atof(mergeAB.c_str()) > std::atof(mergeBA.c_str());
	}


};