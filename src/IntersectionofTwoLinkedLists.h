#pragma once
#include <iostream>
#include <map>

/************************************************************************/
/* ��Ϊ�����������������һ���ģ������ж����һ���ڵ��Ƿ���ͬ�Ϳ����ж���û�н������
/* �Ƚ����������ͷ������h1-h2����h1�ǳ�������ĸ�����h2�Ƕ̵�����ĸ�������Ȼ������
   ������ͬʱ�����ߣ�ֱ����ͬ
   
*/
/************************************************************************/
class IntersectionofTwoLinkedLists
{

  //Definition for singly-linked list.
public:
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
public:
	IntersectionofTwoLinkedLists(){}
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
	{
		//�����������Ϊ�Ǻ���Ĳ�һ�����غ�
		//if (headA == NULL || headB == NULL)
		//{
		//	return NULL;
		//}
		//std::map<ListNode*, int> nodeMap;
		//ListNode* tmp = headA;
		//int i = 0;
		//while (tmp)
		//{
		//	if (nodeMap.find(tmp) == nodeMap.end())
		//	{
		//		nodeMap.insert(std::pair<ListNode*, int>(tmp, i++));
		//		tmp = tmp->next;
		//	}
		//	else
		//		return tmp;
		//	
		//}
		//tmp = headB;
		//while (tmp)
		//{
		//	if (nodeMap.find(tmp) == nodeMap.end())
		//	{
		//		nodeMap.insert(std::pair<ListNode*, int>(tmp, i++));
		//		tmp = tmp->next;
		//	}
		//	else
		//		return tmp;

		//}
		//return NULL;

		
		if (headA == NULL || headB == NULL)
		{
			return NULL;
		}

		ListNode* h1 = headA;
		ListNode* h2 = headB;
		int count1 = 1;
		while (h1->next)
		{
			count1++;
			h1 = h1->next;
		}
		int count2 = 1;
		while (h2->next)
		{
			count2++;
			h2 = h2->next;
		}

		if (h1 != h2)
		{
			return NULL;
		}
		
		int moreStep = std::abs(count1-count2);

		if (count1 > count2)
		{
			h1 = headA;
			h2 = headB;

		}
		else
		{
			h1 = headB;
			h2 = headA;
		}
		while (moreStep)
		{
			h1 = h1->next;
			moreStep--;
		}
		while (h1 != NULL && h2 != NULL && h1 != h2)
		{
			h1 = h1->next;
			h2 = h2->next;
		}
		return h1;
	}
};