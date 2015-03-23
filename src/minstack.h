/************************************************************************/
/* ά������stackһ����ԭʼ���ݵ�stack��һ������С����minStack��
   ��һ��Ԫ��push������ʱ���Ⱥ�minStack.top�Ƚϣ����С�ڵ��ھ�push����
   ��pop��ʱ����minStack.top���бȽϣ������Ⱦ�pop
*/
/************************************************************************/
#pragma once
#include <stack>
#include <iostream>
#include <limits>
class MinStack {
public:
	MinStack()
	{
		minElement =  INT_MAX;
	}
	void push(int x) {
		if (minData.empty() || minData.top() >= x)
		{
			//minElement = x;
			minData.push(x);
		}
		data.push(x);
		
	}

	void pop() {

		if (!minData.empty() && minData.top() == data.top())
		{
			minData.pop();
		}
		if (!data.empty())
		{
			data.pop();
		}
	}

	int top() {
		if (!data.empty())
		{
			return data.top();
		}
	}

	int getMin() {
		if(!minData.empty())
			return minData.top();
		
	}
private:
	int minElement;
	std::stack<int> data;
	std::stack<int> minData;
};