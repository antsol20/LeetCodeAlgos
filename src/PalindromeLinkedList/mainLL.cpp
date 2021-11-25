#include "ListNode.h"
#include "Solutions.h"

void solution1() {

	ListNode nodes[4];
	nodes[0].val = 1;
	nodes[0].next = &nodes[1];

	nodes[1].val = 2;
	nodes[1].next = &nodes[2];

	nodes[2].val = 2;
	nodes[2].next = &nodes[3];

	nodes[3].val = 1;
	nodes[3].next = nullptr;

	PalindromeLinkedList1 solution = PalindromeLinkedList1();
	solution.isPalindrome(&nodes[0]);

	auto missing_char = solution.left2right[solution.left2right.length() - 1];
	solution.right2left = missing_char + solution.right2left;

	bool palindrome = solution.left2right == solution.right2left;

	PRINT_OUT("is Palindrome?");
	PRINT_OUT(palindrome);


}

void solution2() {

	ListNode nodes[4];
	nodes[0].val = 1;
	nodes[0].next = &nodes[1];

	nodes[1].val = 2;
	nodes[1].next = &nodes[2];

	nodes[2].val = 2;
	nodes[2].next = &nodes[3];

	nodes[3].val = 3;
	nodes[3].next = nullptr;

	PalindromeLinkedList2 solution = PalindromeLinkedList2();
	bool result = solution.init(&nodes[0]);

	if (result)
		PRINT_OUT("Yes");
	else
		PRINT_OUT("No");


}


int solution3() {

	ListNode nodes[4];
	nodes[0].val = 1;
	nodes[0].next = &nodes[1];

	nodes[1].val = 2;
	nodes[1].next = &nodes[2];

	nodes[2].val = 2;
	nodes[2].next = &nodes[3];

	nodes[3].val = 3;
	nodes[3].next = nullptr;

	PalindromeLinkedList3 solution = PalindromeLinkedList3();
	bool result = solution.isPalindrome(&nodes[0]);

	if (result)
		PRINT_OUT("Yes");
	else

		return 0;
}


int mainLL()
{
	solution1();
	solution2();
	solution3();
	return 0;
}