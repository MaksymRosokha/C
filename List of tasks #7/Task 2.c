#include <stdio.h>
#include <stdlib.h>

#define ROWS 10
#define COLS 15

void complete_array(int arr[][COLS], int rows, int cols);
void print_array(int arr[][COLS], int rows, int cols);
void new_array(int arr[][COLS], int newArr[][COLS], int rows, int cols);

int main(){
	int arr[ROWS][COLS];
	int newArr[ROWS][COLS];
	
	printf("Array:\n");
	complete_array(arr, ROWS, COLS);
	print_array(arr, ROWS, COLS);
	printf("\nNew array:\n");
	new_array(arr, newArr, ROWS, COLS);
	print_array(newArr, ROWS, COLS);
	
	return 0;
}

void new_array(int arr[][COLS], int newArr[][COLS], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			newArr[i][j] = arr[i][j] * arr[i][j];
		}
	}
}

void complete_array(int arr[][COLS], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			arr[i][j] = (rand() % 1000) - 500;
		}
	}
}

void print_array(int arr[][COLS], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
