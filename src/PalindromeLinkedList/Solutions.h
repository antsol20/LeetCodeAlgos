#pragma once
#include "ListNode.h"
#include <string>
#include <stack>

class PalindromeLinkedList1 {

public:
	bool isPalindrome(ListNode* head);

	std::string right2left;
	std::string left2right;

};

class PalindromeLinkedList2 {

public:

	ListNode* first;
	bool result;

	bool init(ListNode* head);

	bool isPalindrome(ListNode* head);

};

class PalindromeLinkedList3 {

public:

	std::stack<char> my_stack;
	bool isPalindrome(ListNode* head);

};
