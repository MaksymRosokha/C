#include <stdio.h>

void countNumbers(int arr[], int length);

int main(){
	int arr[] = {2,5,3,0, -3, 0, -2, -4, 6};
	int length = sizeof(arr) / sizeof(arr[0]);
	
	countNumbers(arr, length);
	
	return 0;
}

void countNumbers(int arr[], int length){
	int positive = 0, negative = 0, zero = 0;
	
	for(int i = 0; i < length; i++){
		if(arr[i] > 0){
			positive++;
		}
		if(arr[i] < 0){
			negative++;
		}
		if(arr[i] == 0){
			zero++;
		}
	}
	printf("Positive: %d\nNegative: %d\nZero:%d", positive, negative, zero);
	
}

