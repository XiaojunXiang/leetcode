#pragma once
#include <iostream>
#include <stack>
using namespace std;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BSTIterator {
public:
    BSTIterator(TreeNode *root) 
	{
		if (root)
		{
			mRoot = root;
			TreeNode* curNode = root;
			mNodeStack.push(curNode);
			curNode = curNode->left;
			while (curNode)
			{
				mNodeStack.push(curNode);
				curNode = curNode->left;
			}
		}

    }

    /** @return whether we have a next smallest number */
    bool hasNext() 
	{
		if (!mNodeStack.empty())
		{
			
			TreeNode* curNode = mNodeStack.top();
			mValue = curNode->val;
			mNodeStack.pop();
			
			curNode = curNode->right;
			if (curNode != NULL)
			{
				mNodeStack.push(curNode);
				curNode = curNode->left;
				while (curNode)
				{
					mNodeStack.push(curNode);
					curNode = curNode->left;
				}
			}

			return true;
		}
		else
		{
			return false;
		}

    }

    /** @return the next smallest number */
    int next() 
	{
		return mValue;
    }
private:
	TreeNode* mRoot;
	stack<TreeNode*> mNodeStack;
	int mValue;
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */