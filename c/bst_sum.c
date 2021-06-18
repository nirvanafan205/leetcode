#include <stdio.h>
#include <stdlib.h>

struct node
{
	//key and childrens
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data)
{
	//allocates nodes
	struct node* node = (struct node*)malloc(sizeof(struct node) );

	node->data = data;

	//initializing left and right childs NULLS
	node->left = node->right = NULL;
	return (node);
}

void inOrder(struct node* temp, int max, int min);
int checking(int num, int max, int min);

int main()
{
	int L = 420;
	int H = 777;

	struct node* root = newNode(69);

	root->left = newNode(420);
	root->right = newNode(777);
	root->left->left = newNode(21);

	inOrder(root, H, L);
}

void inOrder(struct node* temp, int max, int min)
{
	int sum = 0;
	int sum_ = 0;

	if(temp)
	{
		inOrder(temp->left, max, min);
		int check = temp->data;
		sum = sum + checking(check, max, min);
		printf("firts");
		printf("%d ", sum);


		inOrder(temp->right, max, min);
		int check_ = temp->data;
		sum_ = sum_ + checking(check_, max, min);
		printf("second");
		printf("%d ", sum_);
	}
}

int checking(int num, int max, int min)
{
	if(num >= min && num <= max)
	{
		return num;
	}

	else 
	{
		return 0;
	}
}
