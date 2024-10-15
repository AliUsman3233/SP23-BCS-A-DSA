#include<iostream>
using namespace std;

struct Node {
	Node* left;
	int data;
	Node* right;
};

class Tree {
public:
	Node* root = NULL;

	Node* createNode(int data) {
		Node* newNode = new Node;
		newNode->left = NULL;
		newNode->data = data;
		newNode->right = NULL;
		return newNode;
	}

	int fac(int n) {
		if (n == 0 || n == 1) {
			return 1;
		}
		else {
			return n * fac(n - 1);
		}
	}


	Node* addNode(Node* root, int data) {
		if (root == NULL) {
			Node* newNode = createNode(data);

			return newNode;
		}
		else if (data < root->data) {
			root->left = addNode(root->left, data);
		}
		else if (data > root->data) {
			root->right = addNode(root->right, data);
		}
		return root;
	}


	void inorder(Node* root) {
		if (root != NULL) {
			inorder(root->left);
			cout << "Data at node -> " << root->data << endl;
			inorder(root->right);
		}
	}



};



void main(void) {
	Tree t;
	t.root = t.addNode(t.root, 5);
	t.root = t.addNode(t.root, 7);
	t.root = t.addNode(t.root, 3);
	t.root = t.addNode(t.root, 1);
	t.root = t.addNode(t.root, -19);

	t.inorder(t.root);
	system("pause");
}