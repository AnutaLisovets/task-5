#include "Header.h"

void reversElements(int* array, int size) {
	for (int i = size - 1; i != -1; i--) {
		cout << array[i] << " ";
	}
}

int calculateNoZeroElements(int* array, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] != 0) {
			count++;
		}
	}
	return count;
}

int calculateCountOfNumbersBiggerThenN(int* array, int size) {
	int number;
	int count = 0;
	/*cout << "input number: ";
	cin >> number;*/

	for (int i = 0;i < size; i++) {
		if (array[i] > number) {
			count++;
		}
	}
	return count;
	/*cout << "this massive have " << count << " numbers which bigger than " << number;*/
}

int calculateCountOfNumbers(int* array, int size) {
	int sum = 0;
	int count = 0;
	for (int i = 0;i < size;i++) {
		sum += array[i];
	}
	int avg = sum / size;
	for (int i = 0;i < size; i++) {
		count++;
	}
}

bool checkElements(int* array, int size) {
	for (int i = 0;i < size; i++) {
		if (array[i] = array[i + 1])
			return false;
	}
	return true;
}

void bubbleSort(int* array, int size) {
	for (int j = 0;j < size - 1;j++) {
		for (int i = 0;i < size - 1 - j;i++) {
			if (array[i] > array[i + 1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}