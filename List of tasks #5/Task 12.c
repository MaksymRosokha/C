#include <stdio.h>
#include <stdlib.h>

void printArray(double arr[], int length);
void completeArray(double arr[], int length);
void sumVectors(double vector1[], double vector2[], double result[], int length);
double scalarProductOfVectors(double vector1[], double vector2[], int length);


int main() {	
	int length = 3;
	double vector1[length];
	double vector2[length];
	
	double sumVect[length];
	double scalarProductVect;
	
	completeArray(vector1, length);
	completeArray(vector2, length);
	printf("Vector 1: \n");
	printArray(vector1, length);
	printf("Vector 2: \n");
	printArray(vector2, length);
	
	printf("Sum vectors: \n");
	sumVectors(vector1, vector2, sumVect, length);
	printArray(sumVect, length);
	
	scalarProductVect = scalarProductOfVectors(vector1, vector2, length);
	printf("Scalar product of vectors: %.2lf\n", scalarProductVect);
	
	
	return 0;
}

void sumVectors(double vector1[], double vector2[], double result[], int length) {
	for(int i = 0; i < length; i++){
		result[i] = vector1[i] + vector2[i];
	}
}
double scalarProductOfVectors(double vector1[], double vector2[], int length){
	double scalarProduct = 0;
	
	for(int i = 0; i < length; i++){
		scalarProduct += vector1[i] * vector2[i];
	}
	
	return scalarProduct;
}

void completeArray(double arr[], int length){
	for (int i = 0; i < length; i++) {
	    arr[i] = (rand() % 10) + (double)(rand() % 10)/10;
	}
}


void printArray(double arr[], int length){
	for(int i = 0; i < length; i++) {
		printf("Array[%d] = %.2lf\n", i, arr[i]);
	}
	printf("\n");
}
