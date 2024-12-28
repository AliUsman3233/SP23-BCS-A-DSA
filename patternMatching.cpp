#include<iostream>
using namespace std;

class Stack {
private:
	int size;
	char* arr;
	int top = -1;
public:

	Stack() {
		createStack();
	}

	void createStack() {
		cout << "Enter Size" << endl;
		cin >> size;
		arr = new char[size];
	}


	void push(char data) {
		if (top == size - 1) {
			cout << "Stack is already Full" << endl;
		}
		else {
			top = top + 1;
			arr[top] = data;
			cout << "Data (" << data << ") is pushed on " << top << endl;
		}
	}

	bool pop() {
		if (top == -1) {
			cout << "Stack is Empty" << endl;
			return false;
		}
		else {
			cout << "Data is = " << arr[top] << endl;
			top = top - 1;
			return true;
		}
	}

	bool isEmpty() {
		return top == -1;
	}


};

struct MatchingResponse {
	bool state;
	string message;
};

bool matchFirstPattern(string s) { // a^2n b^n
	Stack stack;
	int i = 0;
	for (; i < s.length(); i++) {
		if (s[i] == 'a') {
			stack.push(s[i]);
		}
		else {
			break;
		}

	}

	for (int j = i; i < s.length(); i++) {
		if (s[i] == 'b') {
			if (!stack.pop()) {
				return false;
			}
			if (!stack.pop()) {
				return false;
			}
		}
		else {
			return false;
		}
	}

	if (stack.isEmpty()) {
		return true;
	}
	else {
		return false;
	}
}

MatchingResponse matchSecondPattern(string s) { // a^n b^2n
	Stack stack;
	int i = 0;
	for (; i < s.length(); i++) {
		if (s[i] == 'a') {
			stack.push(s[i]);
		}
		else {
			break;
		}

	}

	bool flag = false;
	for (int j = i; i < s.length(); i++) {
		if (s[i] == 'b') {
			if(flag == false) {
				if (!stack.pop()) {
					return { false, "Number of a's are less then reqired number" };
				}
			}
			flag = !flag;
		}
		else {
			return { false, "a comes after b" };
		}
	}

	if (stack.isEmpty()) {
		return { true, "Mattern Matched" };
	}
	else {
		return { false, "Mattern not Matche : Number of a's are more then number of b's" };
	}
}



void main() {
	string s;
	char state;
	while (true) {
		cout << "Enter the string" << endl;
		cin >> s;
		MatchingResponse response = matchSecondPattern(s);
		cout << response.message << endl;
		/*if (response.state) {
			cout << response.message << endl;
		}
		else {
			cout << response.message << endl;
		}*/
		cin >> state;
		if (state == 'n') {
			break;
		}
		system("cls");
	}
	
}