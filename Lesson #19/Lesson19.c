#include <stdio.h>
#include <stdlib.h>

#define WAYS 6

void print2dArray(int** arr, int height, int width);
void print1dArray(int* arr, int length);
void fillArray(int** arr, int height, int width);
void printInfo(int** arr, int height, int width);
void findWays(int** arr, int height, int width, int way, int* traveledPaths);

int main(){
	int** arr = (int**) malloc(sizeof(int*) * WAYS);
	for(int i = 0; i < WAYS; i++){
		arr[i] = malloc(sizeof(int) * WAYS);
	}
	
	int traveledPaths[WAYS] = {0,0,0,0,0,0};
	
	fillArray(arr, WAYS,WAYS);
	print2dArray(arr, WAYS, WAYS);
	
	printInfo(arr, WAYS, WAYS);
	
	int way = 2;
	printf("From %d you can go to: \n", way);
	findWays(arr, WAYS, WAYS, way, traveledPaths);
	print1dArray(traveledPaths, WAYS);
	
	for(int i = 0; i < WAYS; i++){
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}

void findWays(int** arr, int height, int width, int way, int* traveledPaths){
	traveledPaths[way] = 1;
	
	for(int i = 0; i < height; i++){
		if(arr[way][i] == 1 && traveledPaths[i] != 1){
			findWays(arr, height, width, i, traveledPaths);
		}
	}
}

void printInfo(int** arr, int height, int width){
	for(int i = 0; i < height; i++){
		int waysIn = 0, waysOut = 0;
		
		for(int j = 0; j < width; j++){
			if(arr[j][i] != 0){
				waysIn++;
			}
			if(arr[i][j] != 0){
				waysOut++;
			}
		}
		printf("%d has %d ways in and %d ways out\n", i, waysIn, waysOut);
	}
}

void fillArray(int** arr, int height, int width){
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			arr[i][j] = 0;
		}
	}
	arr[0][3] = 1;
	arr[1][4] = 1;
	arr[1][5] = 1;
	arr[2][1] = 1;
	arr[2][5] = 1;
	arr[4][0] = 1;
	arr[4][5] = 1;
}

void print2dArray(int** arr, int height, int width){
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print1dArray(int* arr, int length){
	for(int i = 0; i < length; i++){
		printf("[%d] = %d\n", i, arr[i]);
	}
}
