#include <stdio.h>

void replaceMaxAndMix(int arr[], int lenght);
void moveOnePositionBack(int arr[], int lenght);
void printArray(int arr[], int lenght);


int main() {
	
	int arr[] = {3,1263,346,52,353,524,45,3,-1};
	int lenght = sizeof(arr) / sizeof(arr[0]);
	
	printArray(arr, lenght);
	printf("\n");
	moveOnePositionBack(arr, lenght);
	printArray(arr, lenght);
	
	return 0;
}

void moveOnePositionBack(int arr[], int lenght) {
	int firstPosition = arr[0];
	
	for(int i = 0; i < lenght - 1; i++) {
		arr[i] = arr[i+1];
	}
	arr[lenght - 1] = firstPosition;
}

void replaceMaxAndMix(int arr[], int lenght) {
	int maxNumber = arr[0];
	int indexMax = 0;
	int minNumber = arr[0];
	int indexMin = 0;

	for(int i = 0; i < lenght; i++) {
		if(arr[i] < minNumber) {
			minNumber = arr[i];
			indexMin = i;
		}
		if(arr[i] > maxNumber) {
			maxNumber = arr[i];
			indexMax = i;
		}
	}
	arr[indexMax] = minNumber;
	arr[indexMin] = maxNumber;
}

void printArray(int arr[], int lenght){
	for(int i = 0; i < lenght; i++) {
		printf("Array[%d] = %d\n", i, arr[i]);
	}
}
