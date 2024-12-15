#include <stdio.h>
#include <stdlib.h>

double** createArray(int rows, int cols);
void completeArray(double** arr, int rows, int cols);
void printArray(double** arr, int rows, int cols);
void freeArray(double** arr, int rows);

void sortBySumColumns(double** arr, int rows, int cols);
void swapColmns(double** arr, int rows, int colIndex1, int colIndex2);
double sumColumns(double** arr, int rows, int columnIndex);

int main(){
	int rows = 3, cols = 10;
	double** arr = createArray(rows, cols);
	
	printf("---Array---\n");
	completeArray(arr, rows, cols);
	printArray(arr, rows, cols);

	printf("---Array after sorting by sum of columns---\n");
	sortBySumColumns(arr, rows, cols);
	printArray(arr, rows, cols);
	
	freeArray(arr, rows);
	
	return 0;
}

void sortBySumColumns(double** arr, int rows, int cols){
	for(int i = 0; i < cols; i++){
		double minSum = sumColumns(arr, rows, i);
		int minInd = i;
		
		for(int j = i; j < cols; j++){
			double tempSum = sumColumns(arr, rows, j);
			if(minSum > tempSum){
				minSum = tempSum;
				minInd = j;
			}
		}
		
		swapColmns(arr, rows, i, minInd);
	}
}

void swapColmns(double** arr, int rows, int colIndex1, int colIndex2){
	for(int i = 0; i < rows; i++){
		double temp = arr[i][colIndex1];
		arr[i][colIndex1] = arr[i][colIndex2];
		arr[i][colIndex2] = temp;
	}
}

double sumColumns(double** arr, int rows, int columnIndex){
	double sum = 0;
	
	for(int i = 0; i < rows; i++){
		sum += arr[i][columnIndex];
	}
	
	return sum;
}

double** createArray(int rows, int cols){
	double** arr = (double**) malloc(sizeof(double*) * rows);
	
	for(int i = 0; i < rows; i++){
		arr[i] = (double*) malloc(sizeof(double) * cols);
	}
	
	return arr;
}

void completeArray(double** arr, int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			arr[i][j] = ((rand() % 200) - 100) + (rand() % 100) / 100.0;
		}
	}
}

void printArray(double** arr, int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			printf("%.2lf\t", arr[i][j]);
		}
		printf("\n");
	}
}

void freeArray(double** arr, int rows){
	for(int i = 0; i < rows; i++){
		free(arr[i]);
	}
	free(arr);
}
