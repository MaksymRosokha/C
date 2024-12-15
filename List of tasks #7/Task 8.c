#include <stdio.h>
#include <stdlib.h>

#define COLS 5
#define ROWS 8

int** create_array(int rows, int cols);
void complete_array(int** arr, int rows, int cols);
int** getTransposedArray(int** arr, int rows, int cols);
void print_array(int** arr, int rows, int cols);
void free_2dArray(int** arr, int rows);

int main(){
	int** arr = create_array(ROWS, COLS);
	
	printf("---Array---\n");
	complete_array(arr, ROWS, COLS);
	print_array(arr, ROWS, COLS);
	printf("\n");
	
	printf("---Transposed array---\n");
	int** transposedArr = getTransposedArray(arr, ROWS, COLS);
	print_array(transposedArr, COLS, ROWS);
	printf("\n");
	
	free_2dArray(arr, ROWS);
	free_2dArray(transposedArr, COLS);
	
	return 0;
}

int** getTransposedArray(int** arr, int rows, int cols){
	int** transposedArr = create_array(cols, rows);
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			transposedArr[j][i] = arr[i][j];
		}
	}
	
	return transposedArr;
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
