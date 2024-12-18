/*#include<iostream>
using namespace std;

int binarySearch(int* arr, int start, int end, int dataToSearch) {
	cout << "we are at" << arr[start] <<" --- " <<arr[end] << endl;
	system("pause");
	if (start < end) {
		int mid = (start + end) / 2;
		if (arr[mid] == dataToSearch) {
			return mid;
		}
		else if (dataToSearch < arr[mid]) {
			return binarySearch(arr, start, mid - 1, dataToSearch);
		}
		else {
			return binarySearch(arr, mid + 1, end, dataToSearch);
		}
	}
	else {
		return -1;
	}
 }


void main() {
	int dataToSeach;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Enter value to find" << endl;
	cin >> dataToSeach;
	int receivedIndex = binarySearch(arr, 0, (sizeof(arr) / sizeof(int)) - 1, dataToSeach);

	if (receivedIndex == -1) {
		cout << "Data not found" << endl;
	}
	else {
		cout << "Data found at index -> "<< receivedIndex << endl;
	}
	system("pause");
}*/