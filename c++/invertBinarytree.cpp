#include <iostream>

using namespace std;

struct Node
{
	int data; //node value
	struct Node *left, *right; //left and right child
};

//utiltiy function to create a new tree node
Node* newNode(int data)
{
	//allocates new node
	Node* temp = new Node;

	//sets temp to equal node value
	temp->data = data;

	temp->left = temp->right = NULL;
	return temp;
}

//definition
Node* create(int data)
{
	Node* newNode = new Node();

	if(!newNode)
	{
		return NULL;
	}

	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

//root - left child - right child
//root node is traversed first then its left child and finally right child
void printPreorder(struct Node* node)
{
	if(node == NULL)
	{
		return;
	}

	//prints the data of the node first
	cout << node->data << " ";

	//recursion on the left
	printPreorder(node->left);
	printPreorder(node->right);
}

//pre order traversal, at each node its left and right child is swaped
Node* invertTree(Node* root)
{
	if(root == NULL)
	{
		return root;
	}

	swap(root->left, root->right); //takes whole subtree along with swap

	invertTree(root->left);
	invertTree(root->right);
	return root;
}

int main()
{
	//create root
	struct Node* root = newNode(4);

	root->left = newNode(2);

	root->left->left = newNode(1);

	root->left->right = newNode(3);

	root->right = newNode(7);

	root->right->left = newNode(6);

	root->right->right = newNode(9);

	cout << "Before" << endl;
	printPreorder(root); //4, 2, 7, 1, 3, 6, 9

	invertTree(root);

	cout << "After" << endl;
	printPreorder(root); //4, 2, 7, 1, 3, 6, 9
	
	cout << endl;
}
