#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int length);
void completeArray(int arr[], int length);
void exchangeElements(int arr[], int length);


int main() {	
	int length = 11;
	int arr[length];
	
	completeArray(arr, length);
	printf("Array: \n");
	printArray(arr, length);
	
	exchangeElements(arr, length);
	printf("\nArray after exchanging elements: \n");
	printArray(arr, length);
	
	return 0;
}

void exchangeElements(int arr[], int length){
	for(int i = 0, j = length - 1; i < j; ){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		
		i++;
		j--;
	}
}

void completeArray(int arr[], int length){
	for (int i = 0; i < length; i++) {
	    arr[i] = (rand() % 10) + 2;
	}
}


void printArray(int arr[], int length){
	for(int i = 0; i < length; i++) {
		printf("Array[%d] = %d\n", i, arr[i]);
	}
}
