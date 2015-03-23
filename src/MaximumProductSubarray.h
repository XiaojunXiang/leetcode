#pragma once
/************************************************************************/
/* 要维护三个变量，局部最大，局部最小，全局最大，局部最小如果是个比较小的负数，第i个数是个较大的
   负数，那么相乘的话就会得到一个比较大的数，所以需要维护这几个变量
*/
/************************************************************************/

class MaximumProductSubarray
{
public:
	MaximumProductSubarray(){}
	int maxProduct(int A[], int n) 
	{
		if (n == 1)
		{
			return A[0];
		}
		int localMax = A[0];
		int	localMin = A[0];
		int globalMax = A[0];
		for (int i = 1; i < n; i++)
		{
			int temp = localMin * A[i];
			localMin = std::min(std::min(A[i], localMax*A[i]), temp);
			localMax = std::max(std::max(A[i], localMax*A[i]), temp);
			globalMax = std::max(localMax, globalMax);
		}
		return globalMax;
	}

};