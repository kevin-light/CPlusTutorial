#include<iostream>
#include "list_node.h"

using namespace std;

int main4() {
	ListNode node5 = { 5, nullptr };
	ListNode node4 = { 4, &node5 };
	ListNode node3 = { 3, &node4 };
	ListNode node2 = { 2, &node3 };
	ListNode node1 = { 1, &node2 };

	ListNode* list = &node1;

	ListNode* curr = list;
	ListNode* prev = nullptr;

	while (curr)
	{
		ListNode* temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;

	}
	ListNode* newList = prev;

	ListNode* np = newList;
	while (np)
	{
		cout << np->value << "\t->\t";
		np = np->next;
	}
	cout << "null" << endl;
	cin.get();
}