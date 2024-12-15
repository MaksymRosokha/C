#include <stdio.h>
#include <stdlib.h>

int** createArray(int rows, int cols);
void completeArray(int** arr, int rows, int cols);
int* getDivisibleNumbers(int** arr, int rows, int cols, int divisor, int* amountDivisibleNumbers);
void print2DArray(int** arr, int rows, int cols);
void print1DArray(int* arr, int length);
void free2DArray(int** arr, int rows);

int main(){
	int rows, cols;
	int** tab;
	int* divisibleNumbers;
	int divisor = (rand() % 98) + 2;
	int amountDivisibleNumbers;
	
	do{
		printf("\nBefore you enter amount of rows and columns, you must know that \namount of rows and columns must be > 0 and rows * columns = 1000\n");
		printf("Enter amount of rows: ");
		scanf("%d", &rows);
		printf("Enter amount of cols: ");
		scanf("%d", &cols);
	}while(rows * cols != 1000 || rows < 0 || cols < 0);
	
	tab = createArray(rows, cols);
	divisibleNumbers = getDivisibleNumbers(tab, rows, cols, divisor, &amountDivisibleNumbers);
	
	printf("---Array---\n");
	print2DArray(tab, rows, cols);
	printf("---Numbers in the array devisible by %d---\n", divisor);
	print1DArray(divisibleNumbers, amountDivisibleNumbers);
	
	free2DArray(tab, rows);
	free(divisibleNumbers);
	
	return 0;
}

int* getDivisibleNumbers(int** arr, int rows, int cols, int divisor, int* amountDivisibleNumbers){
	int* divisibleNumbers;
	*amountDivisibleNumbers = 0;
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(arr[i][j] % divisor == 0){
				(*amountDivisibleNumbers)++;
			}
		}
	}
	
	if(*amountDivisibleNumbers != 0){
		divisibleNumbers = (int*)malloc(sizeof(int) * *amountDivisibleNumbers);
		for(int i = 0, count = 0; i < rows; i++){
			for(int j = 0; j < cols; j++){
				if(arr[i][j] % divisor == 0){
					divisibleNumbers[count++] = arr[i][j];
				}
			}
		}
	} else {
		divisibleNumbers = NULL;
	}
	
	return divisibleNumbers;
}

int** createArray(int rows, int cols){
	int** arr = (int**) malloc(sizeof(int*) * rows);
	
	for(int i = 0; i < rows; i++){
		arr[i] = (int*) malloc(sizeof(int) * cols);
	}
	
	completeArray(arr, rows, cols);
	
	return arr;
}

void completeArray(int** arr, int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			arr[i][j] = (rand() % 98) + 2;
		}
	}
}

void print2DArray(int** arr, int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

void print1DArray(int* arr, int length){
	if(arr == NULL){
		printf("The array is empty");
	}
	for(int i = 0; i < length; i++){
		printf("%3d", arr[i]);
	}
}

void free2DArray(int** arr, int rows){
	for(int i = 0; i < rows; i++){
		free(arr[i]);
	}
	free(arr);
}
