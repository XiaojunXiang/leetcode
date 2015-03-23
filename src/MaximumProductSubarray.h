#pragma once
/************************************************************************/
/* Ҫά�������������ֲ���󣬾ֲ���С��ȫ����󣬾ֲ���С����Ǹ��Ƚ�С�ĸ�������i�����Ǹ��ϴ��
   ��������ô��˵Ļ��ͻ�õ�һ���Ƚϴ������������Ҫά���⼸������
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