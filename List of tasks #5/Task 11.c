#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int length);
void fillArray(int arr[], int length);
void printArray(int arr[], int length);

int main(){
	int arr[100];
	int length = sizeof(arr)/sizeof(arr[0]);
	
	fillArray(arr, length);
	sort(arr, length);
	printArray(arr, length);
	
	return 0;
}

void fillArray(int arr[], int length){
	for (int i = 0; i < length; i++) {
	    arr[i] = (rand() % 2000) - 1000;
	}
}

void sort(int arr[], int length){
	for(int i = 0; i < length; i++){
		int min = arr[i];
		int minInd = i;
		
		for(int j = i; j < length; j++){
			if(min > arr[j]){
				min = arr[j];
				minInd = j;
			}
		}
		
		arr[minInd] = arr[i];
		arr[i] = min;
	}
}

void printArray(int arr[], int length){
	for(int i = 0; i < length; i++){
		printf("Array[%d] = %d\n", i, arr[i]);
	}
}
