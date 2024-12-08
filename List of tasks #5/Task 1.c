#include <stdio.h>

#define length 10
void printArray(int arr[]);

int main() {
	
	int arr[] = {3,1263,346,52,353,524,45,3,-1, 46};
	printArray(arr);
	
	return 0;
}



void printArray(int arr[]){
	for(int i = 0; i < length; i++) {
		printf("Array[%d] = %d\n", i, arr[i]);
	}
}
