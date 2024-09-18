#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* link;
};

Node* head = NULL;

Node* createNode(int data) {
	Node* newNode = new Node;
	newNode->data = data;
	newNode->link = NULL;
	return newNode;
}

void addNodeAtLast(int data) {
	Node* newNode = createNode(data);  // Node creation
	if (head == NULL) { // when linklist is empty
		head = newNode;
	}
	else { // when linklist is not empty
		Node* headCopy = head;
		while (headCopy->link != NULL) {
			headCopy = headCopy->link;
		}
		headCopy->link = newNode;	
	}
}

void addNodeAtStart(int data) {
	Node* newNode = createNode(data);
	if (head == NULL) {
		head = newNode;
	}
	else {
		newNode->link = head;
		head = newNode;
	}
}

void displayList() {
	Node* headCopy = head;

	while (headCopy != NULL) {
		cout << "Data at this node  = " << headCopy->data << endl;
		headCopy = headCopy -> link;
	}
}




void main(void) {

	addNodeAtLast(10);
	addNodeAtLast(20);
	addNodeAtLast(30);
	addNodeAtLast(40);
	addNodeAtLast(50);
	addNodeAtLast(60);
	addNodeAtStart(5);
	displayList();
	system("pause");
}