#include <stdio.h>

void printNumberInBinary(unsigned int number);
unsigned int aboveZero(int *arr, unsigned int lenght);
void printArray(int *arr, unsigned int lenght);
int sumOfElementsWhichBelow3(int *arr, int lenght);

int main() {
	/*unsigned int number = 0;
	printNumberInBinary(number);*/
	
	
	int arr[] = {2, -4, 0, 5, 5, 1};
	unsigned int lenght = sizeof(arr) / sizeof(arr[0]);
	
	//printf("%u", aboveZero(arr, lenght));
	//printArray(arr, lenght);
	printf("%d", sumOfElementsWhichBelow3(arr, lenght));
	
	return 0;
}

int sumOfElementsWhichBelow3(int *arr, int lenght){
	int sum = 0;
	for(int i = 0; i < lenght; i++){
		if(arr[i] < 3) {
			sum += arr[i];
		}
	}
	return sum;
}

void printArray(int *arr, unsigned int lenght) {
	for(int i = 0; i < lenght; i++){
		printf("%d ", arr[i]);
	}
}

unsigned int aboveZero(int *arr, unsigned int lenght) {
	unsigned int count = 0;
	
	for(int i = 0; i < lenght; i++){
		if(arr[i] > 0) {
			count++;
		}
	}
	
	return count;
}

void printNumberInBinary(unsigned int number) {
	if(number == 0) {
		printf("0");
		return;
	}
	
	unsigned int tempNum = number;
	unsigned int arrayLenght = 0;
	
	while(tempNum != 0) {
		tempNum /= 2;
		arrayLenght++;
	}
	
	unsigned int binary[arrayLenght];
	
	for(int i = arrayLenght-1; i >= 0; i--) {
		binary[i] = number % 2;
		number /= 2;
	}
	
	for(int i = 0; i < arrayLenght; i++) {
		printf("%u", binary[i]);
	}
	
}
