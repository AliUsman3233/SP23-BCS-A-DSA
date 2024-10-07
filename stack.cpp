/*#include<iostream>
using namespace std;
//const int SIZE = 5;

class Stack {
private:
	int size;
	int *arr;
	int top = -1;
public:

	Stack() {
		createStack();
	}

	void createStack() {
		cout << "Enter Size" << endl;
		cin >> size;
		arr = new int[size];
	}


	void push(int data) {
		if (top == size - 1) {
			cout << "Stack is already Full" << endl;
		}
		else {
			top = top + 1;
			arr[top] = data;
			cout << "Data ("<< data <<") is pushed on " << top << endl;
		}	
	}

	void pop() {
		if (top == -1) {
			cout << "Stack is Empty" << endl;
		}
		else {
			cout << "Data is = " << arr[top] << endl;
			top = top - 1;
		}
	}

};







void main(void) {

	Stack s;
	s.push(1);
	s.push(2);
	s.push(4);
	s.push(8);
	s.push(12);
	s.push(15);

	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	system("pause");
}*/