#include <stdio.h>
#include <stdlib.h>

#define COLS 10
#define ROWS 15

void complete_array(int arr[][COLS], int rows, int cols);
void print_array(int arr[][COLS], int rows, int cols);
void print_transposed_array(int arr[][ROWS], int rows, int cols);

void multiplyByScalar(int arr[][COLS], int result[][COLS], int rows, int cols, int number);
void sumArrays(int arr1[][COLS], int arr2[][COLS], int result[][COLS], int rows, int cols);
void transposeArray(int arr[][COLS], int result[][ROWS], int rows, int cols);

int main(){
	int tab1[ROWS][COLS];
	int tab2[ROWS][COLS];
	int tab3[ROWS][COLS];
	int tab4[COLS][ROWS];
	
	printf("---tab1 == Array---\n");
	complete_array(tab1, ROWS, COLS);
	print_array(tab1, ROWS, COLS);
	printf("\n");
	
	int number = 5;
	printf("---tab2 == After multiplication by scalar: %d---\n", number);
	multiplyByScalar(tab1, tab2, ROWS, COLS, number);
	print_array(tab2, ROWS, COLS);
	printf("\n");
	
	printf("---tab1 + tab2---\n", number);
	sumArrays(tab1, tab2, tab3, ROWS, COLS);
	print_array(tab3, ROWS, COLS);
	printf("\n");
	
	printf("---Array after transposing---\n");
	transposeArray(tab3, tab4, ROWS, COLS);
	print_transposed_array(tab4, COLS, ROWS);
	printf("\n");
	

	return 0;
}

void transposeArray(int arr[][COLS], int result[][ROWS], int rows, int cols){
	int side = (rows > cols) ? rows : cols;
	int tempArr[side][side];
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			tempArr[j][i] = arr[i][j];
		}
	}
	for(int i = 0; i < cols; i++){
		for(int j = 0; j < rows; j++){
			result[i][j] = tempArr[i][j];
		}
	}
}

void sumArrays(int arr1[][COLS], int arr2[][COLS], int result[][COLS], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			result[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

void multiplyByScalar(int arr[][COLS], int result[][COLS], int rows, int cols, int number){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			result[i][j] = arr[i][j] * number;
		}
	}
}

void complete_array(int arr[][COLS], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			arr[i][j] = (rand() % 200) - 100;
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

void print_transposed_array(int arr[][ROWS], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
