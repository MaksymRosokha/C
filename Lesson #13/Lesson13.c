#include <stdio.h>

void sort(int arr[], int length);
void printArray(int arr[], int length);
void print(int *p, int n);
int sumElements(int *arr, int length);

int main() {
	int arr[] = {-7, 6, 2, 6, 2, 534, 6, 22, -2};
	int length = sizeof(arr) / sizeof(arr[0]);
	
	printf("Sum of elements = %d", sumElements(arr, length));
	
	return 0;
}

void print(int *p, int n){
	int *q = p+n;
	while(p!=q){
		printf("%d\n", *p);
		++p;
	}
}

int sumElements(int *arr, int length){
	int *maxIndex = arr+length;
	int sum = 0;
	while(arr != maxIndex){
		sum += *arr;
		arr++;
	}
	return sum;
}

void sort(int arr[], int length) {

	for(int i = 0; i < length; i++) {
		int min = arr[i];
		int minIndex = i;
		
		for(int j = i; j < length; j++){
			if (arr[j] < min) {
				min = arr[j];
				minIndex = j;
			}
		}
		arr[minIndex] = arr[i];
		arr[i] = min;
	}
}

void printArray(int arr[], int length){
	for(int i = 0; i < length; i++) {
		printf("Array[%d] = %d\n", i, arr[i]);
	}
}
