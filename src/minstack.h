/************************************************************************/
/* 维护两个stack一个是原始数据的stack，一个是最小数的minStack，
   当一个元素push进来的时候，先和minStack.top比较，如果小于等于就push进来
   当pop的时候，与minStack.top进行比较，如果相等就pop
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