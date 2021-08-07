#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct Nodes
{
	int data;
	Nodes* left;
	Nodes* right;
};

Nodes* create(int data);
vector<int> inOrder(Nodes* temp, vector<int> output);

int main()
{
	Nodes* root = create(2);
	root->left = create(1);
	root->right = create(3);
	vector<int> input;

	input = inOrder(root, input);

	for(int i = 0; i < input.size(); i++)
	{
		cout << input[i] << endl;
	}
}

Nodes* create(int data)
{
	Nodes* newNode = new Nodes();

	if(!newNode)
	{
		return NULL;
	}

	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

vector<int> inOrder(Nodes* temp, vector<int> output)
{
	stack<Nodes*> helper;
	Nodes* current = temp;

	while(current != NULL || !helper.empty() )
	{
		while(current!= NULL)
		{
			helper.push(current);
			current = current->left;
		}

		current = helper.top();
		helper.pop();

		output.push_back(current->data);
		current = current->right;
	}

	return output;
}

// leetcode 94: Binary Tree Inorder Traversal
// Given the root of a binary tree,
// return the inorder traversal of its nodes' values.
// output 1, 2, 3
