#include <iostream>
#include <stack>
#include <vector>

struct Nodes
{
	int data;
	Nodes* left;
	Nodes* right;
};

Nodes* create(int data);
int rangeSumBST(Nodes* root, int low, int high, int num);

using namespace std;

int main()
{
	Nodes* root = create(10);
	root->left = create(5);
	root->left->left = create(3);
	root->left->right = create(7);
	root->right = create(15);
	root->right->right = create(18);
	int low = 7;
	int high = 15;
	int sum;

	sum = rangeSumBST(root, low, high, sum);
	cout << sum << endl;
}

Nodes* create(int data)
{
	Nodes* newNode = new Nodes();

	if(!newNode)
	{
		return newNode;
	}

	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

//inorder traversal
int rangeSumBST(Nodes* root, int low, int high, int num)
{
	stack<Nodes*> input;
	Nodes* current = root;

	while(current != NULL || !input.empty() )
	{
		while(current != NULL)
		{
			input.push(current);
			current = current->left;
		}

		current = input.top();
		input.pop();

		if(current->data <= high && current->data >= low)
		{
			num += current->data;	
		}

		current = current->right;
	}

	return num;
}
// leetcode 938: Range Sum of BST
// Given the root node of a binary search tree and two integers low and high,
// return the sum of values of all nodes with a value in the inclusive range [low, high].
// output 32
