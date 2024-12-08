#include <stdio.h>

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

void printArray(int arr[], int lenght){
	for(int i = 0; i < lenght; i++) {
		printf("Array[%d] = %d\n", i, arr[i]);
	}
}
