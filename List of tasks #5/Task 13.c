#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int length);
void completeArray(int arr[], int length);


int main() {	
	int length = 3;
	int arr[length];
	int *first, *second, *third;
	
	
	completeArray(arr, length);
	printf("Array: \n");
	printArray(arr, length);
	
	first = &arr[0];
	second = &arr[1];
	third = &arr[2];
	
	*first *= 3;
	*second *= 3;
	*third *= 3;
	
	printf("Array after multiplication by 3: \n");
	printArray(arr, length);
	
	return 0;
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
