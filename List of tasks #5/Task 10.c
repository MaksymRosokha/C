#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int length);
void completeArray(int arr[], int length);
void getBiggestSumOfNeighboringElements(int *arr, int length, int *index);


int main() {	
	int length = 11;
	int arr[length];
	int index = 0;
	
	
	completeArray(arr, length);
	printf("Array: \n");
	printArray(arr, length);
	
	getBiggestSumOfNeighboringElements(arr, length, &index);
	if (index != -1) {
        printf("Index with the biggest sum of neighbors: %d\n", index);
    } else {
        printf("Array length is too small to determine neighbors.\n");
    }
	
	return 0;
}

void getBiggestSumOfNeighboringElements(int *arr, int length, int *index){
	if(length < 2){
		*index = -1;
		return;
	}
	
	int maxSum = arr[length - 1]+ arr[1];
	*index = 0;
	
	for(int i = 1; i < length; i++){
		int left = arr[i-1];
		int right = (i == length - 1) ? arr[0] : arr[i+1];
		int currentSum = left+right;
		
		if(maxSum < currentSum){
			maxSum = currentSum;
			*index = i;
		}
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
