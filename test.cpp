/*#include<iostream>
using namespace std;

struct Manager {

	string name;
	string department;
	double salary;
};

struct Node {
	Manager data;
	Node* link;
};

Node* head = NULL;

Node* createNode(Manager data) {

	Node* newNode = new Node;
	newNode->data = data;
	newNode->link = NULL;
	return newNode;
}

//Adding Nodes in Linked list

void addnodeatlast(Manager data) {

	Node* newNode = createNode(data);

	if (head == NULL) {
		head = newNode;
		newNode->link = head;
	}

	else {

		Node* headcopy = head;
		while (headcopy->link != head) {
			headcopy = headcopy->link;
		}

		headcopy->link = newNode;
		newNode->link = head;
	}
}

void addnodeatstart(Manager data) {

	Node* newNode = createNode(data);

	if (head == NULL) {
		head = newNode;
		newNode->link = head;
	}

	else {

		Node* headcopy = head;
		while (headcopy->link != head) {
			headcopy = headcopy->link;
		}

		newNode->link = head;
		head = newNode;
		headcopy->link = newNode;

	}
}

void addnodeatmid(Manager data) {

	Node* newNode = createNode(data);

	int location;
	cout << "Enter location where you want to add new node: ";
	cin >> location;

	Node* headcopy = head;

	for (int i = 0; i < location - 1; i++) {

		if (headcopy->link != head) {
			headcopy = headcopy->link;
		}
	}

	newNode->link = headcopy->link;
	headcopy->link = newNode;
}

//Deleting Nodes from Linked List

void deletefromstart() {


	if (head != NULL) {

		if (head->link == head) {
			head = NULL;
		}
		else {

			Node* headcopy = head;
			while (headcopy->link != head) {
				headcopy = headcopy->link;
			}

			head = head->link;
			headcopy->link = head;
		}

	}
}

void deletefromlast() {

	if (head->link == head) {
		head = NULL;
	}

	Node* pre = NULL;
	Node* headcopy = head;
	while (headcopy->link != head) {
		pre = headcopy;
		headcopy = headcopy->link;

	}

	pre->link = head;
}


void deletefrommid() {

	int location;
	cout << "Enter location from where you want to delete node: ";
	cin >> location;

	Node* headcopy = head;

	for (int i = 0; i < location - 2; i++) {
		if (headcopy->link != head) {
			headcopy = headcopy->link;
		}
	}

	headcopy->link = headcopy->link->link;
}

void displaymanager(Manager m) {

	cout << "Name: " << m.name << endl;
	cout << "Department: " << m.department << endl;
	cout << "Salary: " << m.salary << endl;

}

void displaydata() {

	if (head == NULL) {
		cout << "Linked list is empty." << endl;
	}

	else {
		Node* headcopy = head;

		do {
			cout << "Data at Node: ";
			displaymanager(headcopy->data);
			cout << endl;
			headcopy = headcopy->link;
		} while (headcopy != head);

	}
}

void search_and_display_bydepartment() {

	string department;
	cout << "Enter the value you want to search: ";
	cin >> department;

	Node* headcopy = head;
	bool isfound = false;

	if (headcopy == head) {
		if (department == headcopy->data.department) {

			isfound = true;
			displaymanager(headcopy->data);

		}
	}

	headcopy = headcopy->link;
	while (headcopy != head) {

		if (department == headcopy->data.department) {

			isfound = true;
			displaymanager(headcopy->data);

		}
		headcopy = headcopy->link;
	}



	if (isfound == false) {

		cout << "Data not found.";
	}

}

void search_and_update_byname() {

	string name;
	cout << "Enter the name you want to search: ";
	cin >> name;

	Node* headcopy = head;
	bool isfound = false;

	if (headcopy == head) {
		if (name == headcopy->data.name) {

			isfound = true;
			cout << "Name: ";
			cin >> headcopy->data.name;
			cout << "Department: ";
			cin >> headcopy->data.department;
			cout << "Salary";
			cin >> headcopy->data.salary;
		}
	}

	headcopy = headcopy->link;
	while (headcopy != head) {

		if (name == headcopy->data.name) {

			isfound = true;
			cout << "Name: ";
			cin >> headcopy->data.name;
			cout << "Department: ";
			cin >> headcopy->data.department;
			cout << "Salary: ";
			cin >> headcopy->data.salary;

		}
		headcopy = headcopy->link;
	}



	if (isfound == false) {

		cout << "Data not found.";
	}

}

void search_and_delete_bysalary() {


	double salary;
	cout << "Enter the Salary of person you want to search and delete: ";
	cin >> salary;

	Node* headcopy = head;
	Node* pre = NULL;
	bool isfound = false;
	bool isFirst = true;
	if (head != NULL) {
		while (headcopy != head || isFirst) {
			isFirst = false;
			//cout << "Salary at this node  = " << headcopy->data.salary << endl;
			if (salary == headcopy->data.salary) {
				isfound = true;
				if (headcopy == head) {
					head = head->link;
					Node* nestedHeadCopy = head;
					while (nestedHeadCopy->link != headcopy) {
						nestedHeadCopy = nestedHeadCopy->link;
					}
					nestedHeadCopy->link = head;
				} else {
					pre->link = headcopy->link;
				}
				//return;
			} else {
				pre = headcopy;
			}
			headcopy = headcopy->link;
			
		} 
	}

	if (isfound == false) {

		cout << "Data not found.";
	}
	else {
		cout << "Data found.";

	}
}

			//If the node to be delete is the first node



	//If the node to be delete is in middle or end


/*while (headcopy != head) {

		if (salary == headcopy->data.salary) {
			isfound = true;

			pre->link = headcopy->link;

		}

		pre = headcopy;
		headcopy = headcopy->link;
	}
	
	



int main() {
	addnodeatlast({ "Zeeshan", "Finance", 130000 });
	addnodeatlast({ "Ayesha", "HR", 130000 });
	addnodeatlast({ "Maryam", "Sales", 1320000 });
	addnodeatlast({ "Sulaiman", "Marketing", 150000 });
	addnodeatlast({ "Maryam 2", "Sales 2", 23456 });
	addnodeatlast({ "Sulaiman 2", "Marketing 2", 34567 });


	displaydata();
	//search_and_display_bydepartment();
	//search_and_update_byname();
	search_and_delete_bysalary();
	displaydata();

}*/