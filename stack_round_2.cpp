#include<iostream>
#include<string>
#include<string.h>
using namespace std;
//const int SIZE = 5;

struct Student {
	int age;
	string name;
	string id;

	string getAgeAsString() {
		return to_string(age);
	}
};


class Stack {
private:
	int size;
	Student* arr;
	int top = -1;
public:

	Stack() {
		createStack();
	}

	void createStack() {
		cout << "Enter Size" << endl;
		cin >> size;
		arr = new Student[size];
	}

	string getStudentString(Student s) {
		return "Name: " + s.name + "     Age:  " + s.getAgeAsString() + "      id:    " + s.id + "   ";
	}


	void push(Student data) {
		if (top == size - 1) {
			cout << "Stack is already Full" << endl;
		}
		else {
			top = top + 1;
			arr[top] = data;
			cout << "Data (" << getStudentString(data) << ") is pushed on " << top << endl;
		}
	}

	void pop() {
		if (top == -1) {
			cout << "Stack is Empty" << endl;
		}
		else {
			cout << "Data is = " << getStudentString(arr[top]) << endl;
			top = top - 1;
		}
	}

};







void main(void) {

	Stack s;
	s.push({ 30,"Ali",  "1"});
	s.push({ 20, "Bilal",  "2" });
	s.push({ 10,"Tahir", "33" });
	s.push({ 5, "Kashif", "66" });
	s.push({ 2,"Faisal", "77" });
	s.push({ 0,"Nauman", "88" });

	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	system("pause");
}