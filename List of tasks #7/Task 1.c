#include <stdio.h>
#include <stdlib.h>

#define ROWS 10
#define COLS 15

void complete_array(int arr[][COLS], int rows, int cols);
void print_array(int arr[][COLS], int rows, int cols);

int main(){
	int arr[ROWS][COLS];
	
	complete_array(arr, ROWS, COLS);
	print_array(arr, ROWS, COLS);
	
	return 0;
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
