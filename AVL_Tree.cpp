/*#include<iostream>
using namespace std;

struct Node {
	Node* left;
	int data;
	Node* right;
	int height;
};

class AVLTree {


public:
	Node* root = NULL;
	Node* createNode(int data) {
		Node* newNode = new Node;
		newNode->left = NULL;
		newNode->data = data;
		newNode->right = NULL;
		return newNode;
	}


	void displayRoot(Node* root) {
		cout << root->data << ", ";
	}


	Node* rightRotate(Node* root) {
		Node* rootLeft = root->left;
		Node* root_Left_Right = rootLeft->right;

		rootLeft->right = root;
		root->left = root_Left_Right;

		int rootLeft_Left_height = 0;
		if (rootLeft->left != NULL) {
			rootLeft_Left_height = rootLeft->left->height;
		}

		int rootLeft_Right_height = 0;
		if (rootLeft->right != NULL) {
			rootLeft_Right_height = rootLeft->right->height;
		}

		rootLeft->height = 1 + (rootLeft_Left_height > rootLeft_Right_height ? rootLeft_Left_height : rootLeft_Right_height);


		int root_Left_height = 0;
		if (root->left != NULL) {
			root_Left_height = root->left->height;
		}

		int root_Right_height = 0;
		if (root->right != NULL) {
			root_Right_height = root->right->height;
		}

		root->height = 1 + (root_Left_height > root_Right_height ? root_Left_height : root_Right_height);

		return rootLeft;
	}

	Node* LeftRotate(Node* root) {
		Node* rootRight = root->right;
		Node* rootRightLeft = rootRight->left;

		rootRight->left = root;
		root->right = rootRightLeft;

		int rootRight_Left_height = 0;
		if (rootRight->left != NULL) {
			rootRight_Left_height = rootRight->left->height;
		}

		int rootRight_Right_height = 0;
		if (rootRight->right != NULL) {
			rootRight_Right_height = rootRight->right->height;
		}

		rootRight->height = 1 + (rootRight_Left_height > rootRight_Right_height ? rootRight_Left_height : rootRight_Right_height);


		int root_Left_height = 0;
		if (root->left != NULL) {
			root_Left_height = root->left->height;
		}

		int root_Right_height = 0;
		if (root->right != NULL) {
			root_Right_height = root->right->height;
		}

		root->height = 1 + (root_Left_height > root_Right_height ? root_Left_height : root_Right_height);

		return rootRight;
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
		else {
			return root;
		}
		int leftHeight = 0;
		if (root->left != NULL) {
			leftHeight = root->left->height;
		}
		int rightHeight = 0;
		if (root->right != NULL) {
			rightHeight = root->right->height;
		}


		root->height = 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);


		int balance = leftHeight - rightHeight;

		// Left - Left Imbalabance 4 - 2 = 2
		if (balance > 1 && root->left != NULL && data < root->left->data) {
			return rightRotate(root);
		}
		else if (balance< -1 && root->right != NULL && data > root->right->data) {
			return LeftRotate(root);
		}
		else if (balance > 1 && root->left != NULL && data > root->left->data) {
			root->left = LeftRotate(root->left);
			return rightRotate(root);
		}
		else if (balance < -1 && root->right != NULL && data < root->right->data) {
			root->right = rightRotate(root->right);
			return LeftRotate(root);
		}

		return root;
	}

	void inOrder(Node* root) { // left, root, right
		if (root != NULL) {
			inOrder(root->left);
			displayRoot(root);
			inOrder(root->right);
		}
	}
};



void main(void) {
	AVLTree t;
	t.root = t.addNode(t.root, 500);
	t.root = t.addNode(t.root, 400);
	t.root = t.addNode(t.root, 300);
	t.root = t.addNode(t.root, 200);
	t.root = t.addNode(t.root, 100);
	t.root = t.addNode(t.root, 90);
	t.root = t.addNode(t.root, 80);
	t.root = t.addNode(t.root, 70);
	t.root = t.addNode(t.root, 60);

	cout << endl << "Tree inOrder traversal result " << endl;
	t.inOrder(t.root);
	


	int choice;
	while (true) {
		cout << "Enter 1 to display \nEnter 2 to search \nEnter 3 to delete node\nEnter 4 to exit" << endl;
		cin >> choice;
		switch (choice) {

		case 1:
			cout << "Tree PreOrder traversal result " << endl;
			t.inOrder(t.root);
			break;
		case 2:
			
			break;
		case 3:
		
			break;
		case 4:
			exit(0);

		}
		system("pause");
		system("cls");
	}
	system("pause");

	system("pause");
}*/