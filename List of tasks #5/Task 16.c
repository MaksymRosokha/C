#include <stdio.h>
#include <stdlib.h>

void printArray(double arr[], int length);
void completeArray(double arr[], int length);
double* getMaxElement(double* arr, int length);


int main() {	
	int length = 15;
	double arr[length];
	double* maxElement;
	
	completeArray(arr, length);
	printf("Array: \n");
	printArray(arr, length);
	
	maxElement = getMaxElement(arr, length);
	printf("Max element is: %.2lf", *maxElement);
	
	return 0;
}

double* getMaxElement(double* arr, int length){
	double* maxElement = arr;
	double* lastElement = arr + length - 1;
	
	while(arr <= lastElement){
		if(*maxElement < *arr){
			maxElement = arr;
		}
		arr++;
	}
	
	return maxElement;
}

void completeArray(double arr[], int length){
	for (int i = 0; i < length; i++) {
	    arr[i] = (rand() % 100) + (double)(rand() % 100)/100;
	}
}


void printArray(double arr[], int length){
	for(int i = 0; i < length; i++) {
		printf("Array[%d] = %.2lf\n", i, arr[i]);
	}
	printf("\n");
}
