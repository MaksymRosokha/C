#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int length);
void completeArray(int arr[], int length);
void multiplyArrayBy(int *arr, int length, int number);


int main() {	
	int length = 11;
	int arr[length];
	int number = 4;
	
	completeArray(arr, length);
	printf("Array: \n");
	printArray(arr, length);
	
	multiplyArrayBy(arr, length, number);
	printf("\nArray after multiplying all elements by %d: \n", number);
	printArray(arr, length);
	
	return 0;
}

void multiplyArrayBy(int *arr, int length, int number){
	int end = arr+length;
	
	while(arr < end){
		*arr *= number;
		arr++;
	}
}

void completeArray(int arr[], int length){
	for (int i = 0; i < length; i++) {
	    arr[i] = (rand() % 10) + 1;
	}
}


void printArray(int arr[], int length){
	for(int i = 0; i < length; i++) {
		printf("Array[%d] = %d\n", i, arr[i]);
	}
}
