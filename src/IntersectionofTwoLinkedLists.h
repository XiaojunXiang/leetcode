#pragma once
#include <iostream>
#include <map>

/************************************************************************/
/* 因为两个链表后面是练成一条的，所有判断最后一个节点是否相同就可以判断有没有交叉点了
/* 先将长的链表从头往后走h1-h2步（h1是长的链表的个数，h2是短的链表的个数），然后再两
   个链表同时往后走，直到想同
   
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
		//这个方法我以为是后面的不一定会重合
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