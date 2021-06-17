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

void inOrder(struct node* temp, int sum);

int main()
{
	struct node* root = newNode(69);
	int amount = 0;

	root->left = newNode(420);
	root->right = newNode(777);
	root->left->left = newNode(21);
	
	inOrder(root, amount);

	printf("%d ", amount);
}

void inOrder(struct node* temp, int sum)
{
	if(temp == NULL)
	{
		return;
	}

	inOrder(temp->left, sum);
	printf("%d " , temp->data);
	sum += temp->data;
	printf("%d " , sum);
	inOrder(temp->right, sum);
}
