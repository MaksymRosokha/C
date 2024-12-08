#include <stdio.h>

#define length 8

void printArrayFromEnd(double arr[]);
void enterArray(double arr[]);

int main() {	
	double arr[length];
	
	enterArray(arr);
	printArrayFromEnd(arr);
	
	return 0;
}

void enterArray(double arr[]){
	for(int i = 0; i < length; i++) {
		printf("Enter element [%d]=", i);
		scanf("%lf", &arr[i]);
	}
}

void printArrayFromEnd(double arr[]){
	for(int i = length - 1; i >= 0; i--) {
		printf("Array[%d] = %.2lf\n", i, arr[i]);
	}
}
