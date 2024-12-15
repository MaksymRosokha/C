#include <stdio.h>
#include <stdlib.h>

#define COLS 8
#define ROWS 8

int** create_array(int rows, int cols);
void complete_array(int** arr, int rows, int cols);
int** sum2DArrays(int** arr1, int** arr2, int rows, int cols);
void print_array(int** arr, int rows, int cols);
void free_2dArray(int** arr, int rows);

int main(){
	int** arr1 = create_array(ROWS, COLS);
	int** arr2 = create_array(ROWS, COLS);
	
	printf("---Array 1---\n");
	complete_array(arr1, ROWS, COLS);
	print_array(arr1, ROWS, COLS);
	printf("\n");
	
	printf("---Array 2---\n");
	complete_array(arr2, ROWS, COLS);
	print_array(arr2, ROWS, COLS);
	printf("\n");

	printf("---Sum of array 1 and array 2---\n");
	int** sum = sum2DArrays(arr1, arr2, ROWS, COLS);
	print_array(sum, ROWS, COLS);
	printf("\n");
	
	free_2dArray(arr1, ROWS);
	free_2dArray(arr2, ROWS);
	free_2dArray(sum, ROWS);
	
	return 0;
}

int** sum2DArrays(int** arr1, int** arr2, int rows, int cols){
	int** sum = create_array(rows, cols);
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	return sum;
}

int** create_array(int rows, int cols){
	int** arr = (int**) malloc(sizeof(int*) * rows);
	
	for(int i = 0; i < rows; i++){
		arr[i] = (int*) malloc(sizeof(int) * cols);
	}
	
	return arr;
}

void complete_array(int** arr, int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			arr[i][j] = (rand() % 100);
		}
	}
}

void print_array(int** arr, int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

void free_2dArray(int** arr, int rows){
	for(int i = 0; i < rows; i++){
		free(arr[i]);
	}
	free(arr);
}
