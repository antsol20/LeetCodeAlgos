#include <iostream>
#include <string>
#include "ListNode.h"
#include "Solutions.h"


bool PalindromeLinkedList1::isPalindrome(ListNode* head)
{

	PRINT_OUT(head->val);
	left2right += head->val;

	if (head->next != nullptr) {
		isPalindrome(head->next);
		PRINT_OUT(head->val);
		right2left += head->val;
	}

	else
		return true;
}

