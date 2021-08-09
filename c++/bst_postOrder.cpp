#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct Nodes
{
	int data;
	Nodes* left;
	Nodes* right;
};

Nodes* create(int data);
vector<int> postOrder(Nodes* temp);

int main()
{
	Nodes* root = create(1);
	root->left = create(2);
	root->right = create(3);
	vector<int> bst;

	bst = postOrder(root);

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

vector<int> postOrder(Nodes* temp)
{
	vector<int> bst;
	if(temp == NULL)
	{
		return vector<int>();
	}

	stack<Nodes*> s1, s2;

	s1.push(temp);
	Nodes* node;

	while(!s1.empty() )
	{
		node = s1.top();
		s1.pop();
		s2.push(node);

		if(node->left)
		{
			s1.push(node->left);
		}

		if(node->right)
		{
			s1.push(node->right);
		}
	}

	while(!s2.empty() )
	{
		node = s2.top();
		s2.pop();
		bst.push_back(node->data);
	}
	return bst;
}
/*
 leetcode 145: Binary Tree Postorder Traversal
 Given the root of a binary tree,
 return the postorder traversal of its nodes' values.
 returned: 2, 3, 1
*/
