#include "TestCase.h"
#include "TrailingZero.h"
#include "BSTIterator.h"
#include "converttotitle.h"
#include "rotatearray.h"
#include "findpeakelement.h"
#include "largestnumber.h"
using namespace std;



void TestCase::testTrailingZero()
{
	TrailingZero tz;
	int zeroNum = tz.trailingZeroes(25);
	cout << zeroNum << endl;
}

void TestCase::testBSTIterator()
{
	TreeNode root(3);
	TreeNode node1(1);
	TreeNode node5(5);
	TreeNode node4(4);
	TreeNode node6(6);
	TreeNode node2(2);

	root.left = &node1;
	node1.right = &node2;
	root.right = &node5;
	node5.left = &node4;
	node5.right = &node6;
	BSTIterator i = BSTIterator(&root);
	while (i.hasNext())
	{
		cout << " " << i.next();
	}
}

void TestCase::testConvertToTitle()
{
	ConvertToTitle ctt;
	std::string str = ctt.convertToTitle(53);
	std::cout << str << std::endl;
}

void TestCase::testRotateArray()
{
	RotateArray ra;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	ra.rotate(a, 10, 8);
	for (int i = 0; i < 10; i ++)
	{
		std::cout << a[i] << " ";
	}
}

void TestCase::testFindPeakElement()
{
	std::vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(1);
	FindPeakElement fpe;

	int peakElement = fpe.findPeakElement(nums);
	std::cout << peakElement << std::endl;
}

void TestCase::testLargestNumber()
{
	LargestNumber ln;
	std::vector<int> nums;
	//nums.push_back(3);
	//nums.push_back(30);
	//nums.push_back(34);
	//nums.push_back(5);
	//nums.push_back(9);
	//nums.push_back(1);
	nums.push_back(999999998);
	nums.push_back(999999997);
	nums.push_back(999999999);

	//cout << std::atof("999999998999999999");
	std::cout << ln.largestNumber(nums) << std::endl;
}
