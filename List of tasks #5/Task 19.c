#include <stdio.h>
#include <stdlib.h>

void print_array(int* arr, int length);
void complete_array(int* arr, int length);
int* create_array(int k);
void reverce(int* startArray, int* endArray);


int main() {
	int amountArrays = 5;
	int arraysSizes[amountArrays];
	int* arrs[amountArrays];
	
	for(int i = 0; i < amountArrays; i++){
		printf("Enter size for %d array: ", i);
		scanf("%d", &arraysSizes[i]);
		arrs[i] = create_array(arraysSizes[i]);
		
		complete_array(arrs[i], arraysSizes[i]);
		print_array(arrs[i], arraysSizes[i]);
		
		reverce(arrs[i], arrs[i]+arraysSizes[i]-1);
		printf("After revercing:\n");
		print_array(arrs[i], arraysSizes[i]);
		printf("\n");
		
		free(arrs[i]);
	}
	
	return 0;
}

void reverce(int* startArray, int* endArray){
	int temp = 0;
	
	while(startArray < endArray){
		temp = *startArray;
		*startArray = *endArray;
		*endArray = temp;
		
		startArray++;
		endArray--;
	}
}

int* create_array(int k){
	return (int*) malloc(sizeof(int) * k);
}


void complete_array(int* arr, int length){
	int* end = arr + length;
	
	for (; arr < end; arr++) {
	    *arr = (rand() % 100) - 50;
	}
}


void print_array(int* arr, int length){
	int* end = arr + length;
	
	for (int i = 0; arr < end; arr++, i++) {
		if(i % 20 == 0){
			printf("\n");
		}
		printf("%5d", *arr);
	}
	printf("\n");
}
