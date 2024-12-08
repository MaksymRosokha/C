#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int length);
void completeArray(int arr[], int length);
int countElementsWhichBiggerThan(int *arr, int length, int k);

int main() {	
	int length = 10;
	int arr[length];
	int k = rand() % 100; 
	int biggerThanK;
	
	completeArray(arr, length);
	printf("Array: \n");
	printArray(arr, length);
	printf("k = %d\n", k);
	
	biggerThanK = countElementsWhichBiggerThan(arr, length, k);
	printf("There are %d numbers which bigger than %d", biggerThanK, k);
	
	return 0;
}

int countElementsWhichBiggerThan(int *arr, int length, int k){
	int biggerThanK = 0;
	int* end = arr + length;
	
	while(arr < end){
		if(k < *arr){
			biggerThanK++;
		}
		arr++;
	} 
	
	return biggerThanK;
}

void completeArray(int arr[], int length){
	for (int i = 0; i < length; i++) {
	    arr[i] = (rand() % 100) + 1;
	}
}


void printArray(int arr[], int length){
	for(int i = 0; i < length; i++) {
		printf("Array[%d] = %d\n", i, arr[i]);
	}
	printf("\n");
}
