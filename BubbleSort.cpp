#include<iostream>
using namespace std;

void bubbleSort(int* arr, int size) {
	int temp;
	bool isSwaped;
	for (int i = 0; i < size - 1; i++) {
		isSwaped = false;
		for (int j = 0; j < size - i -1; j++) {
			if (arr[j] > arr[j + 1]) {
				isSwaped = true;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

		if (isSwaped == false) {
			break;
		}
	}
}

void displayList(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void selectionSort(int* arr, int size) {
	int min;
	int minIndex;
	int temp;
	for (int i = 0; i < size - 1; i++) {
		min = arr[i];
		minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < min) {
				min = arr[j];
				minIndex = j;
			}
		}
		if (minIndex != i) {
			temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
	}
}


void insertionSort(int* arr, int size) {
	int temp;
	int minIndex;
	int min;
	for (int i = 1; i < size; i++) {
		minIndex = i;
		for (int j = i - 1; j >= 0; j--) {
			//cout << "comparing " << arr[i] << " with" << arr[j] << endl;
			if (arr[minIndex] < arr[j]) {
				temp = arr[minIndex];
				arr[minIndex] = arr[j];
				arr[j] = temp;
				minIndex = j;
			}
			//displayList(arr, size);
		}
	}
}


void main() {
	int dataToSeach;
	int arr[9] = { 10,6,8,5,2,19,15,-4,-3 };
	bubbleSort(arr, sizeof(arr) / sizeof(int));
	//selectionSort(arr, sizeof(arr) / sizeof(int));
	//displayList(arr, sizeof(arr) / sizeof(int));
	//insertionSort(arr, sizeof(arr) / sizeof(int));
	displayList(arr, sizeof(arr) / sizeof(int));
	system("pause");
}