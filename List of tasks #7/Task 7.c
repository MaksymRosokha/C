#include <stdio.h>
#include <stdlib.h>

#define COLS 5
#define ROWS 8

int** create_array(int rows, int cols);
void complete_array(int** arr, int rows, int cols);
void print_array(int** arr, int rows, int cols);
void free_2dArray(int** arr, int rows);

int main(){
	int** arr = create_array(ROWS, COLS);
	
	printf("---Array---\n");
	complete_array(arr, ROWS, COLS);
	print_array(arr, ROWS, COLS);
	printf("\n");
	
	free_2dArray(arr, ROWS);
	
	return 0;
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