#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct Nodes
{
	int data;
	Nodes* right;
	Nodes* left;
};

Nodes* create(int data);
vector<int> preOrder(Nodes* temp);

int main()
{
	vector<int> bst;
	Nodes* root = create(3);
	root->left = create(1);
	root->right = create(2);
	bst = preOrder(root);

	for(int i = 0; i < bst.size(); i++)
	{
		cout << bst[i] << endl;
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

vector<int> preOrder(Nodes* temp)
{
	if(temp == NULL)
	{
		return vector<int>();
	}

	stack<Nodes*> nodeStack;
	nodeStack.push(temp);
	vector<int> bst;

	while(!nodeStack.empty() )
	{
		struct Nodes* node = nodeStack.top();
		bst.push_back(node->data);
		nodeStack.pop();

		if(node->right)
		{
			nodeStack.push(node->right);
		}

		if(node->left)
		{
			nodeStack.push(node->left);
		}
	}

	return bst;
}
/*
 leetcode 144: Binary Tree Preorder Traversal
 Given the root of a binary tree,
 return the preorder traversal of its nodes' values. 
 returned: 3, 1, 2
*/
