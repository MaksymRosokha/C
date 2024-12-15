#include <stdio.h>
#include <stdlib.h>

#define N 10

void complete_array(int arr[][N], int rows, int cols);
void copy_array(int arr1[][N], int arr2[][N], int rows, int cols);
void print_array(int arr[][N], int rows, int cols);

void emnpyDiagonal(int arr[][N], int rows, int cols);
long long sumNumbersOnDiagonal(int arr[][N], int rows, int cols);
long long sumNumbersInRowAndPrintOtherSumRows(int arr[][N], int rows, int cols, int indexRow);
long long sumNumbersInColumnAndPrintOtherSumColumns(int arr[][N], int rows, int cols, int indexColumn);
void replaceRows(int arr[][N], int rows, int cols, int row1, int row2);
void emptyColumnsAndRowsWhereSmallestNumber(int arr[][N], int rows, int cols);
void transposeArray(int arr[][N], int rows, int cols);
void emptyElementsUnderDiagonal(int arr[][N], int rows, int cols);

int main(){
	int arr[N][N];
	
	printf("---Array---\n");
	complete_array(arr, N, N);
	print_array(arr, N, N);
	printf("\n");
	
	long long sumDiagonal = sumNumbersOnDiagonal(arr, N, N);
	printf("\nSum of the numbers on the diagonal: %lld\n", sumDiagonal);
	printf("\n");
	
	int rowForSum = 3;
	long long sumRow = sumNumbersInRowAndPrintOtherSumRows(arr, N, N, rowForSum);
	printf("\nSum of the %d row is: %lld\n", rowForSum, sumRow);
	printf("\n");
	
	int columnForSum = 5;
	long long sumColumn = sumNumbersInColumnAndPrintOtherSumColumns(arr, N, N, columnForSum);
	printf("\nSum of the %d column is: %lld\n", columnForSum, sumColumn);
	printf("\n");
	
	int row1 = 6, row2 = 9;
	replaceRows(arr, N, N, row1, row2);
	printf("---Array after replacing %d and %d rows---\n", row1, row2);
	print_array(arr, N, N);
	printf("\n");
	
	printf("---Array after transposing---\n");
	transposeArray(arr, N, N);
	print_array(arr, N, N);
	printf("\n");
	
	printf("---Array with empty rows and columns where the smallest number is---\n");
	emptyColumnsAndRowsWhereSmallestNumber(arr, N, N);
	print_array(arr, N, N);
	printf("\n");
	
	printf("---Array with the empty diagonal---\n");
	emnpyDiagonal(arr, N, N);
	print_array(arr, N, N);
	printf("\n");
	
	printf("---Array with empty elements under the diagonal---\n");
	emptyElementsUnderDiagonal(arr, N, N);
	print_array(arr, N, N);
	printf("\n");

	return 0;
}

void emptyElementsUnderDiagonal(int arr[][N], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(j < i){
				arr[i][j] = 0;
			}
		}
	}
}

void transposeArray(int arr[][N], int rows, int cols){
	int tempArr[rows][cols];
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			tempArr[i][j] = arr[j][i];
		}
	}
	
	copy_array(arr, tempArr, rows, cols);
}

void emptyColumnsAndRowsWhereSmallestNumber(int arr[][N], int rows, int cols){
	int minRow = 0, minCol = 0;
	int min = arr[minRow][minCol];
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(arr[i][j] < min){
				min = arr[i][j];
				minRow = i;
				minCol = j;
			}
		}
	}
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(minRow == i || minCol == j){
				arr[i][j] = 0;
			}
		}
	}
}

void replaceRows(int arr[][N], int rows, int cols, int row1, int row2){
	for(int i = 0; i < cols; i++){
		int temp = arr[row1][i];
		arr[row1][i] = arr[row2][i];
		arr[row2][i] = temp;
	}
}

long long sumNumbersInColumnAndPrintOtherSumColumns(int arr[][N], int rows, int cols, int indexColumn){
	long long sumColumn = 0;
	long long otherSumColumns = 0;
	
	for(int i = 0; i < rows; i++){
		if(i == indexColumn){
			for(int j = 0; j < cols; j++){
				sumColumn += arr[j][i];
			}
		} else {
			for(int j = 0; j < cols; j++){
				otherSumColumns += arr[j][i];
			}
			printf("Sum of the %d column is: %lld\n", i, otherSumColumns);
			otherSumColumns = 0;
		}
	}
	
	return sumColumn;
}

long long sumNumbersInRowAndPrintOtherSumRows(int arr[][N], int rows, int cols, int indexRow){
	long long sumRow = 0;
	long long otherSumRows = 0;
	
	for(int i = 0; i < rows; i++){
		if(i == indexRow){
			for(int j = 0; j < cols; j++){
				sumRow += arr[i][j];
			}
		} else {
			for(int j = 0; j < cols; j++){
				otherSumRows += arr[i][j];
			}
			printf("Sum of the %d row is: %lld\n", i, otherSumRows);
			otherSumRows = 0;
		}
	}
	
	return sumRow;
}

long long sumNumbersOnDiagonal(int arr[][N], int rows, int cols){
	long long sumDiagonal = 0;
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(i == j){
				sumDiagonal += arr[i][j];
			}
		}
	}
	
	return sumDiagonal;
}

void emnpyDiagonal(int arr[][N], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(i == j){
				arr[i][j] = 0;
			}
		}
	}
}

void complete_array(int arr[][N], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			arr[i][j] = (rand() % 100) - 50;
		}
	}
}

void copy_array(int arr1[][N], int arr2[][N], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			arr1[i][j] = arr2[i][j];
		}
	}
}

void print_array(int arr[][N], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
