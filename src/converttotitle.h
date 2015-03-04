#pragma once
#include <string>
class ConvertToTitle
{
public:
	ConvertToTitle(){}
	std::string convertToTitle(int n)
	{
		int n2 = n;
		std::string ret;
		
		while (n2)
		{
			n2--;
			int remainder = n2 % 26;
			char next = 'A' + remainder;
			ret = ret + next;
			n2 /= 26;
			//n2 --;
		}
		return std::string(ret.rbegin(), ret.rend());
	}
};