/*#include<iostream>
using namespace std;

class Queue {

private:
	int size;
	int* arr;
	int front;
	int rare;

public:

	Queue() {
		front = 0;
		rare = -1;
		cout << "Enter the Queue Size" << endl;
		cin >> size;
		arr = new int[size];
	}

	void enQueue(int data) {
		rare = rare + 1;
		arr[rare] = data;
	}

	bool isEmpty() {
		return front > rare;
	}

	bool isFull() {
		return rare == size - 1;
	}

	void deQueue() {
		if (isEmpty()) {
			cout << "Queue is Empty" << endl;
		}
		else {
			cout << "Data is = " << arr[front] << endl;
			front = front + 1;
		}
	}
};



void main(void) {

	Queue q;
	q.enQueue(11);
	q.enQueue(22);
	q.enQueue(33);
	q.enQueue(44);
	q.enQueue(55);

	q.deQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();


	system("pause");
}*/