#include <iostream>
#include <stack>
#include "Solutions.h"

bool PalindromeLinkedList3::isPalindrome(ListNode* head) {

	PRINT_OUT(head->val);
	my_stack.push(head->val);

	if (head->next != nullptr) {
		isPalindrome(head->next);
		PRINT_OUT(head->val);

		if (my_stack.top() == head->val)
			my_stack.pop();

		else
			return false;
	}

	else
		return true;
}



