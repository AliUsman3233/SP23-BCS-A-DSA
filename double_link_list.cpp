#include<iostream>
using namespace std;

struct Node {
	Node* pre;
	int data;
	Node* next;
};

Node* head = NULL;

Node* createNode(int data) {
	Node* newNode = new Node;
	newNode->pre = NULL;
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void addNodeAtLast(int data) {
	Node* newNode = createNode(data);
	if (head == NULL) {
		head = newNode;
	}
	else {
		Node* headCopy = head;
		while (headCopy->next != NULL) {
			headCopy = headCopy->next;
		}

		headCopy->next = newNode;
		newNode->pre = headCopy;
	}
}

void addNodeAtStart(int data) {
	Node* newNode = createNode(data);

	if (head == NULL) {
		head = newNode;
	}
	else {
		head->pre = newNode;
		newNode->next = head;
		head = newNode;
	}

}

void addNodeAtMiddle(int data) {
	int location = 3;
	Node* newNode = createNode(data);
	Node* headCopy = head;
	for (int i = 0; i < location - 1; i++) {
		if (headCopy->next != NULL) {
			headCopy = headCopy->next;
		}
	}

	Node* nextNode = headCopy->next;
	nextNode->pre = newNode;
	newNode->next = nextNode;
	newNode->pre = headCopy;
	headCopy->next = newNode;


	
}

void displayLinkList() {
	Node* headCopy = head;
	while (headCopy != NULL) {
		cout << "Data at node -> " << headCopy->data << endl;
		headCopy = headCopy->next;
	}
}




void main(void) {


	addNodeAtLast(20);
	addNodeAtLast(30);
	addNodeAtLast(40);
	addNodeAtLast(60);
	displayLinkList();
	system("pause");
	addNodeAtStart(70);
	displayLinkList();
	system("pause");
	addNodeAtMiddle(100);
	system("pause");
	displayLinkList();
	system("pause");
}