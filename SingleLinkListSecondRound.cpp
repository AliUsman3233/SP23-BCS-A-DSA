#include<iostream>
using namespace std;
/*
struct Student {
	int id;
	string name;
	int age;
};

struct Node {
	Student data;
	Node* link;
};

Node* head = NULL;

Node* createNode(Student data) {
	Node* newNode = new Node;
	newNode->data = data;
	newNode->link = NULL;
	return newNode;
}

void addNodeAtLast(Student data) {
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

void addNodeAtStart(Student data) {
	Node* newNode = createNode(data);
	if (head == NULL) {
		head = newNode;
	}
	else {
		newNode->link = head;
		head = newNode;
	}
}

void addNodeAtMiddle() {
	Student data = { 1, "Hussain", 20 };
	int location = 3;
	/*cout << "Enter Data" << endl;
	cin >> data;
	cout << "Enter Location" << endl;
	cin >> location;*/
	/*Node* newNode = createNode(data);
	Node* headCopy = head;
	for (int i = 0; i < location - 1; i++) {
		if (headCopy->link != NULL) {
			headCopy = headCopy->link;
		}
	}

	newNode->link = headCopy->link;
	headCopy->link = newNode;
}

void deleteStartNode() {
	if (head != NULL) {
		head = head->link;
	}
}


void deleteFromEnd() {
	Node* headCopy = head;
	Node* prev = NULL;

	if (headCopy != NULL) {
		while (headCopy->link != NULL) {
			prev = headCopy;
			headCopy = headCopy->link;
		}

		prev->link = NULL;
	}
}


void deleteFromMiddle() {
	int location = 3;

	Node* headCopy = head;
	for (int i = 0; i < location - 2; i++) {
		if (headCopy != NULL)
			headCopy = headCopy->link;
	}
	Node* nextNode = headCopy->link;
	headCopy->link = nextNode->link;
}

void displayStudent(Student s) {
	cout << "Id = " << s.id << endl;
	cout << "Name = " << s.name << endl;
	cout << "Age = " << s.age << endl;
}

void displayList() {
	Node* headCopy = head;

	while (headCopy != NULL) {
		cout << "---------------------------" << endl;
		displayStudent(headCopy->data);
		cout << "---------------------------" << endl;
		headCopy = headCopy -> link;
	}
}


void searchStudentByName() {
	string searchName;
	cout << "Enter name to search" << endl;
	cin >> searchName;
	bool isFound = false;
	Node* headCopy = head;
	while (headCopy != NULL) {
		if (searchName == headCopy->data.name) {
			isFound = true;
			displayStudent(headCopy->data);
		}
		headCopy = headCopy->link;
	}
	if (isFound == false) {
		cout << "Data not found" << endl;
	}
}



void main6(void) {

	addNodeAtLast({ 11, "Hussain", 20 });
	addNodeAtLast({ 12, "ALl", 21 });
	addNodeAtLast({ 13, "Usman", 22 });
	addNodeAtLast({ 14, "Ahmad", 23 });
	addNodeAtLast({ 15, "Danish", 24 });
	addNodeAtLast({ 16, "Ali Hassan", 25 });
	addNodeAtMiddle();
	//deleteStartNode();
/	displayList();

//	searchStudentByName(); */
	/*system("pause");
	addNodeAtLast({ 17, "Hammad", 26 });
	displayList();
	system("pause");
	deleteFromEnd();
	displayList();
	system("pause");
	deleteFromMiddle();
	displayList();*/
//	system("pause");
//}