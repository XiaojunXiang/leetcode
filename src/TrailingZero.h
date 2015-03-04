
#pragma once
#include <iostream>

class TrailingZero
{
public:
	TrailingZero(){}
	int trailingZeroes(int n)
	{
		//下面这个版本超时
		//int fiveNum = 0;
		//int fiveMu = 5;
		//while (n >= fiveMu)
		//{
		//	fiveNum += n / fiveMu;
		//	fiveMu *= 5;
		//}
		//return fiveNum;

		//下面这个版本不超时
		int ret = 0;
		while(n)
		{
			ret += n/5;
			n /= 5;
		}
		return ret;
	}
};