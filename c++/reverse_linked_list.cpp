#include <iostream>

using namespace std;

class LL
{
	public:
		int data;
		LL *next;
		void appending(LL** head, int value);
		void print(LL *node);
};

int main()
{
	LL* head = NULL;
	LL* caller;

	caller->appending(&head, 1);
	caller->appending(&head, 2);
	caller->appending(&head, 3);
	caller->appending(&head, 4);
	caller->appending(&head, 5);

	cout << "Link List before reversing: ";
	caller->print(head);
	cout << endl;
	cout << "Linked list after reversing: ";

	LL* other = head;
	LL* prev = NULL, *next = NULL;

	while(other != NULL)
	{
		next = other->next;
		other->next = prev;

		prev = other;
		other = next;
	}

	other = prev;

	caller->print(other);

	cout << endl;
}

void LL::appending(LL** head, int value)
{
	LL* allocating = new LL();
	LL* last = *head;
	allocating->data = value;
	allocating->next = NULL;

	if(*head == NULL)
	{
		*head = allocating;
		return;
	}

	while(last->next != NULL)
	{
		last = last->next;
	}

	last->next = allocating;
	return;
}

void LL::print(LL *node)
{
	while(node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}

//leetcode 206: Reverse Linked List
//Given the head of a singly linked list,
//reverse the list,
//and return the reversed list.
//1, 2, 3,4, 5 -> 5, 4, 3, 2, 1
