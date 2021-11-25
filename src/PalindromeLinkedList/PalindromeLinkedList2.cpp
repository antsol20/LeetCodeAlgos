#include <iostream>
#include <string>
#include "ListNode.h"
#include "Solutions.h"



bool PalindromeLinkedList2::init(ListNode* head) {
	first = head;
	PRINT_OUT("Head is : " << head);
	PRINT_OUT("Head& is : " << &head);
	PRINT_OUT("First is : " << first);
	PRINT_OUT("First& is : " << &first);

	return isPalindrome(head);
}


bool PalindromeLinkedList2::isPalindrome(ListNode* head) {

	PRINT_OUT("Outer First is :" << first);
	PRINT_OUT("Outer Head is :" << head);

	if (head != nullptr) {
		bool result = isPalindrome(head->next);

		PRINT_OUT("First is :" << first->val);
		PRINT_OUT("Head is :" << head->val);

		if (first->val == head->val) {

			first = first->next;
			return true && result;
		}
		else {
			return false && result;

		}
	}

	else
		return true;
}

