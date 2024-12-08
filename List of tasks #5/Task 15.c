#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int length);
void completeArray(int arr[], int length);
int compareSumOfArraySides(int* arr, int wsk, int length);


int main() {	
	int length = 10;
	int arr[length];
	int* wsk;
	
	completeArray(arr, length);
	printf("Array: \n");
	printArray(arr, length);
	wsk = &arr[length / 2 - 1];
	printf("Pointer for spliting: %d \n\n", *wsk);

	if(compareSumOfArraySides(arr, wsk, length)){
		printf("Rigth sum is biggest\n");
	} else {
		printf("Left sum is biggest\n");
	}
	
	return 0;
}

int compareSumOfArraySides(int* arr, int wsk, int length){
	long long leftSum;
	long long rightSum;
	int *lastElement = arr + length - 1;
	
	while(arr <= wsk){
		leftSum += *arr;
		arr++;
	}
	while(arr <= lastElement){
		rightSum += *arr;
		arr++;
	}
	
	return leftSum > rightSum ? 0 : 1;
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
	printf("\n");
}
