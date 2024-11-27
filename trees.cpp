/*#include<iostream>
using namespace std;

struct Node {
	Node* left;
	int data;
	int count;
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
		newNode->count = 1;
		newNode->right = NULL;
		return newNode;
	}



	void displayRoot(Node* root) {
		cout << root->data<<"^"<< root->count<< ", ";
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
			root->count++;
		}
		return root;
	}


	void preOrder(Node* root) { // root, left, right
		if (root != NULL) {
			displayRoot(root);
			preOrder(root->left);
			preOrder(root->right);
		}
	}

	void inOrder(Node* root) { // left, root, right
		if (root != NULL) {
			inOrder(root->left);
			displayRoot(root);
			inOrder(root->right);
		}
	}

	void postOrder(Node* root) { // left, right, root
		if (root != NULL) {
			postOrder(root->left);
			postOrder(root->right);
			displayRoot(root);
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

	Node* removeNode(Node* root, int data) {
		if (root == NULL) {
			return root; //NULL
		}
		if (root->data == data) {

			if (root->count > 1) {
				root->count--;

			}
			else if (root->left == NULL && root->right == NULL) { //  First Case
				return NULL;
			}
			else if (root->left == NULL && root->right != NULL) {//  Second Case
				return root->right;
			}
			else if (root->left != NULL && root->right == NULL) {//  Second Case
				return root->left;
			}
			else {//  Third Case
				Response minValue = findMin(root->right);
				root->data = minValue.data;
				removeNode(root->right, minValue.data);
			}
		}
		else {
			if (data < root->data) {
				root->left =  removeNode(root->left, data);
			}
			else {
				root->right = removeNode(root->right, data);
			}
		}

		return root;


	}

};



void main(void) {
	Tree t;
	t.root = t.addNode(t.root, 50);
	t.root = t.addNode(t.root, 25);
	t.root = t.addNode(t.root, 20);
	t.root = t.addNode(t.root, 30);
	t.root = t.addNode(t.root, 45);
	t.root = t.addNode(t.root, 27);
	t.root = t.addNode(t.root, 26);
	t.root = t.addNode(t.root, 35);
	t.root = t.addNode(t.root, 55);
	t.root = t.addNode(t.root, 52);
	t.root = t.addNode(t.root, 53);
	t.root = t.addNode(t.root, 54);
	t.root = t.addNode(t.root, 30);
	t.root = t.addNode(t.root, 30);
	t.root = t.addNode(t.root, 30);

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
	int dataToDelete;

	int choice;
	Response searchResult;
	while (true) {
		cout << "Enter 1 to display \nEnter 2 to search \nEnter 3 to delete node\nEnter 4 to exit" << endl;
		cin >> choice;
		switch (choice) {

		case 1:
			cout << "Tree PreOrder traversal result " << endl;
			t.inOrder(t.root);
			break;
		case 2:
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
		case 3:
			cout << "Enter value to Delete" << endl;
			cin >> dataToDelete;
			t.root = t.removeNode(t.root, dataToDelete);
			break;
		case 4:
			exit(0);

		}
		system("pause");
		system("cls");
	}
	system("pause");
}*/