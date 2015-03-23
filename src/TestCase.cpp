#include "TestCase.h"
#include "includeHeader.h"
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

void TestCase::testExcelSheetColumnNumber()
{
	ExcelSheetColumnNumber escn;
	std::cout << escn.titleToNumber(std::string("AZ")) << std::endl;
}

void TestCase::testDungeonGame()
{
	DungeonGame dg;
	std::vector<std::vector<int> > dungeon;
	std::vector<int> row1;
	row1.push_back(0);
	row1.push_back(0);
	row1.push_back(0);
	std::vector<int> row2;
	row2.push_back(1);
	row2.push_back(1);
	row2.push_back(-1);
	dungeon.push_back(row1);
	dungeon.push_back(row2);
	std::cout << dg.calculateMinimumHP(dungeon) << std::endl;
}

void TestCase::TestFindMinimuminRotatedSortedArray()
{
	FindMinimuminRotatedSortedArray fmrsa;
	std::vector<int> nums;

	//nums.push_back(4);
	//nums.push_back(5);
	//nums.push_back(6);
	//nums.push_back(1);
	//nums.push_back(1);
	//nums.push_back(2);
	//nums.push_back(3);
	//nums.push_back(3);
	//nums.push_back(3);
	nums.push_back(3);
	nums.push_back(1);
	
	std::cout << fmrsa.findMin(nums) << std::endl;
}

void TestCase::testCompareVersionNumbers()
{
	CompareVersionNumbers cvn;
	std::string version1 = "1";
	std::string version2 = "1.0.1";
	std::cout << cvn.compareVersion(version1, version2) << std::endl;
}

void TestCase::TestFindMinimuminRotatedSortedArrayII()
{
	FindMinimuminRotatedSortedArrayII fmrsaII;
	std::vector<int> nums;
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(3);
	std::cout << fmrsaII.findMin(nums) << std::endl;
}

void TestCase::testInIntersectionofTwoLinkedLists()
{
	IntersectionofTwoLinkedLists::ListNode* node = new IntersectionofTwoLinkedLists::ListNode(1);
	IntersectionofTwoLinkedLists itl;
	IntersectionofTwoLinkedLists::ListNode* result = itl.getIntersectionNode(node, node);
	std::cout << result->val << std::endl;

}

void TestCase::testMinStack()
{
	MinStack ms;
	ms.push(2),ms.push(0),ms.push(3),ms.push(0);

	std::cout << ms.getMin() << std::endl;
	ms.pop();
	std::cout << ms.getMin() << std::endl;
	ms.pop();
	std::cout << ms.getMin() << std::endl;
	ms.pop();
	std::cout << ms.getMin() << std::endl;
}

void TestCase::testMaximumProductSubarray()
{
	MaximumProductSubarray mps;
	int A[4] = {2,3,-2,4};
	std::cout << mps.maxProduct(A, 4) << std::endl;
}

void TestCase::testMajorityElement()
{
	MajorityElement me;
	std::vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);

	std::cout << me.majorityElement(nums) << std::endl;
}
