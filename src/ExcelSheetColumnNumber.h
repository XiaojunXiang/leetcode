#pragma once
#include <string>
#include <algorithm>
class ExcelSheetColumnNumber
{
public:
	ExcelSheetColumnNumber(){}
	int titleToNumber(std::string s)
	{
		int sum = 0;
		sum = (sum + ((int)(s[0]-'A')) + 1);
		for (int i = 1; i < s.length(); i++)
		{
			sum = sum * 26 + ((int)(s[i]-'A')) + 1;
		}
		return sum;
	}
};