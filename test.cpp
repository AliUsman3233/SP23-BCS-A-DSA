/*#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* link = NULL;
};

Node* head = NULL;

Node* createnode(int data) {
	Node* newnode = new Node();
	newnode->data = data;
	newnode->link = NULL;
	return newnode;
}

void addnodeatlast() {

	int data;
	cout << "Enter data:" << endl;
	cin >> data;

	Node* newnode = createnode(data);

	if (head == NULL) {
		head = newnode;
	}

	else
	{
		Node* headcopy = head;
		while (headcopy->link != NULL) {

			headcopy = headcopy->link;
		}
		headcopy->link = newnode;
	}
}

void addnodeatfirst() {
	int data;
	cout << "Enter data for first node:";
	cin >> data;

	Node* newnode = createnode(data);

	if (head == NULL) {
		head = newnode;
	}

	else
	{
		newnode->link = head;
		head = newnode;
	}
}

void addnodeatmid() {
	int data, position;
	cout << "Enter data for middle node:" << endl;
	cin >> data;

	cout << "Enter position where you want to add new node:";
	cin >> position;

	Node* newnode = createnode(data);

	Node* headcopy = head;

	for (int i = 0; i < position - 1; i++) {
		if (headcopy->link != NULL) {
			headcopy = headcopy->link;
		}
	}
	newnode->link = headcopy->link;
	headcopy->link = newnode;
}

void display() {

	if (head == NULL) {
		cout << "Linked list is empty.";
	}
	else
	{
		Node* headcopy = head;
		while (headcopy != NULL) {

			cout << "Data at node " << headcopy->data << endl;
			headcopy = headcopy->link;
		}
	}


}

void search_data_at_node() {

	int search;
	cout << "Enter value you want to search.";
	cin >> search;

	bool isfound = false;

	Node* headcopy = head;

	while (headcopy != NULL) {

		if (search == headcopy->data) {

			isfound = true;
			cout << "Data found:" << headcopy->data;
			break;
		}
		headcopy = headcopy->link;

	}

	if (isfound == false) {
		cout << "Data is not found";
	}
}


int main() {
	int nodecount;
	cout << "Enter the no.of nodes:";
	cin >> nodecount;

	for (int i = 0; i < nodecount; i++)
	{
		addnodeatlast();
	}

	// 	addnodeatfirst();
	//     addnodeatmid();
	display();

	search_data_at_node();
}
*/