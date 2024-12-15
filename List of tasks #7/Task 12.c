#include <stdio.h>
#include <stdlib.h>

int* createAndComplete1DArray(int length);
int** sortArrayByLastDigit(int* arr, int length, int* sizes, int lengthSizes);
void print2DArray(int** arr, int rows, int* sizes);
void print1DArray(int* arr, int length);
void free2DArray(int** arr, int rows);

int main(){
	int length = 200;
	int* arr = createAndComplete1DArray(length);
	int sizes[10] = {0}; 
	int lengthSizes = sizeof(sizes) / sizeof(sizes[0]);
	int** sortedByLastDigit = sortArrayByLastDigit(arr, length, sizes, lengthSizes);
	
	printf("---Array---\n");
	print1DArray(arr, length);
	
	printf("---Sorted array by last digit---\n");
	print2DArray(sortedByLastDigit, lengthSizes, sizes);
	
	free(arr);
	free2DArray(sortedByLastDigit, lengthSizes);
	
	return 0;
}

int** sortArrayByLastDigit(int* arr, int length, int* sizes, int lengthSizes){
	int** sorted = (int**)malloc(sizeof(int*) * lengthSizes);
	
	for(int lastNum = 0; lastNum < lengthSizes; lastNum++){
		for(int i = 0; i < length; i++){
			if(arr[i] % 10 == lastNum){
				sizes[lastNum]++;
			}
		}
	}
	
	for(int i = 0; i < lengthSizes; i++){
		sorted[i] = (int*)malloc(sizeof(int) * sizes[i]);
	}
	
	for(int lastNum = 0; lastNum < lengthSizes; lastNum++){
		int count = 0;
		for(int i = 0; i < length; i++){
			if(arr[i] % 10 == lastNum){
				sorted[lastNum][count++] = arr[i];
			}
		}
	}
	
	return sorted;
}

int* createAndComplete1DArray(int length){
	int* arr = (int*) malloc(sizeof(int) * length);
	
	for(int i = 0; i < length; i++){
		arr[i] = rand() % 5000;
	}
	
	return arr;
}


void print2DArray(int** arr, int rows, int* sizes){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < sizes[i]; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

void print1DArray(int* arr, int length){
	for(int i = 0; i < length; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void free2DArray(int** arr, int rows){
	for(int i = 0; i < rows; i++){
		free(arr[i]);
	}
	free(arr);
}
