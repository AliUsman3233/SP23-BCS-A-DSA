/*#include<iostream>
#include<string>
using namespace std;
struct Node {
	int data;
	Node* link;
};

Node *head = NULL; // Head created



Node* createNode(int data) {
	Node* newNode = new Node(); // New node created
	newNode->data = data; // Data is stored in the new node
	newNode->link = NULL; // Link part is defined as NULL
	return newNode; //retunred the reference of new node
}

void addNode() {
	int data;
	cout << "Enter data" << endl;
	cin >> data;
	Node *newNode = createNode(data);
	if (head == NULL) {
		head = newNode;
	} else{
		Node* headCopy = head;
		while (headCopy->link != NULL) {
			headCopy = headCopy->link;
		}
		headCopy->link = newNode;
	}
}

void displayLink() {
	Node* headCopy = head;
	while (headCopy != NULL) {
		cout << "Data at node = " << headCopy->data << endl;
		headCopy = headCopy->link;
	}
}


void main2() {

	addNode();
	addNode();
	addNode();
	addNode();
	addNode();

	displayLink();

	//Node newNode; // New node created
	//newNode.data = 20; // Data is stored in the new node
	//newNode.link = NULL; // Link part is defined as NULL
	//head = &newNode; // Stored the reference of new node into the head

	system("pause");
}*/