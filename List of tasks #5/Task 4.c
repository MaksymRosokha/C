#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int length);
void completeArray(int arr[], int length);
unsigned int countDivisors(int arr[], int length, int devisor);


int main() {	
	int length = 20;
	int arr[length];
	int devisor;
	unsigned int amountDevisors;
	
	printf("Enter devisor: ");
	scanf("%d", &devisor);
	
	completeArray(arr, length);
	printArray(arr, length);
	
	amountDevisors = countDivisors(arr, length, devisor);
	
	printf("\n Amount divisors in array is: %u", amountDevisors);
	
	return 0;
}

unsigned int countDivisors(int arr[], int length, int devisor){
	int amount = 0;
	for(int i = 0; i < length; i++){
		if(devisor % arr[i] == 0){
			amount++;
		}
	}
	return amount;
}

void completeArray(int arr[], int length){
	for (int i = 0; i < length; i++) {
	    arr[i] = (rand() % 10) + 2;
	}
}


void printArray(int arr[], int length){
	for(int i = 0; i < length; i++) {
		printf("Array[%d] = %d\n", i, arr[i]);
	}
}
