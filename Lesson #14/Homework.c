#include <stdio.h>

int *getPointerWhichBiggerThan(int arr[], int length, int number);

int main(){
	int arr[] = {-4, 1, 2, -5, 7, 234, 45, 222, 456, -43, -654};
	int length = sizeof(arr) / sizeof(arr[0]);
	int number = 3;
	
	int *moreThan = getPointerWhichBiggerThan(arr, length, number);
	printf("%d", *moreThan);

	return 0;
}

int *getPointerWhichBiggerThan(int arr[], int length, int number) {
	int *pointer = arr[length - 1];
	for(int i = 0; i < length; i++){
		if(arr[i] > number) {
			pointer = &arr[i];
			break;
		}
	}
	return pointer;
}
