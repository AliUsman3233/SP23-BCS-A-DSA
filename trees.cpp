#include<iostream>
using namespace std;

struct Node {
	Node* left;
	int data;
	Node* right;
};

struct Response {
	bool status;
	string message;
	int data;
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



	void displayRoot(int value) {
		cout << value << ", ";
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


	void preOrder(Node* root) { // root, left, right
		if (root != NULL) {
			displayRoot(root->data);
			preOrder(root->left);
			preOrder(root->right);
		}
	}

	void inOrder(Node* root) { // left, root, right
		if (root != NULL) {
			inOrder(root->left);
			displayRoot(root->data);
			inOrder(root->right);
		}
	}

	void postOrder(Node* root) { // left, right, root
		if (root != NULL) {
			postOrder(root->left);
			postOrder(root->right);
			displayRoot(root->data);
		}
	}
	
	


	Response search(Node* root, int data) {
		if (root == NULL) {
			return { false, "Data not found", 0 };
		}
		else if (data < root->data) {
			return search(root->left, data);
		}
		else if (data > root->data) {
			return search(root->right, data);
		}
		else {
			return { true, "Data found", data };
		}
	}

	Response findMin(Node* root) {
		if (root != NULL) {
			while (root->left != NULL) {
				root = root->left;
			}
			return { true, "Data found", root->data };
		}
		else {
			return { false, "Data not found", 0 };
		}

	}


	Response findMax(Node* root) {
		if (root != NULL) {
			while (root->right != NULL) {
				root = root->right;
			}
			return { true, "Data found", root->data };
		}
		else {
			return { false, "Data not found", 0 };
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

	cout << "Tree PreOrder traversal result " << endl;
	t.preOrder(t.root);
	cout <<endl<< "Tree inOrder traversal result " << endl;
	t.inOrder(t.root);
	cout << endl << "Tree postOrder traversal result " << endl;
	t.postOrder(t.root);
	cout << endl;

	Response minValueRespinse = t.findMin(t.root);
	if (minValueRespinse.status) {
		cout << "Min value of the tree  = " << minValueRespinse.data << endl;

	}
	else {
		cout << minValueRespinse.message << endl;
	}


	Response maxValueRespinse = t.findMax(t.root);
	if (maxValueRespinse.status) {
		cout << "Max value of the tree  = " << maxValueRespinse.data << endl;

	}
	else {
		cout << maxValueRespinse.message << endl;
	}

	int dataToSearch;
	int choice;
	Response searchResult;
	while (true) {
		cout << "Enter 1 to search \n Enter 2 to exit" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Enter value to search" << endl;
			cin >> dataToSearch;

			searchResult = t.search(t.root, dataToSearch);
			if (searchResult.status) {
				cout << "Huuurryyyyyyyyy" << endl;
				cout << searchResult.message << endl;
			}
			else {
				cout << searchResult.message << endl;
			}
			break;
			case 2:
				exit(0);
		}
		system("pause");
		system("cls");
	}
	system("pause");
}