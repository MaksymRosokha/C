#include <stdio.h>

struct fraction{
	int numerator;
	int denominator;
};

void sort(struct fraction arr[], int length);
double calcFraction(struct fraction);
void printArray(struct fraction arr[], int length);

int main(){
	struct fraction arr[] = { {1,2}, {4,6}, {7,4}, {7,7}, {3,8}, {2,3}, {9,1}};
	int length = sizeof(arr) / sizeof(arr[0]);
	
	printArray(arr, length);
	printf("Sorting...\n");
	sort(arr, length);
	printArray(arr, length);
	
	return 0;
}

void sort(struct fraction arr[], int length){
	for(int i = 0; i < length; i++){
		struct fraction min = arr[i];
		int minInd = i;
		
		for(int j = i; j < length; j++){
			if(calcFraction(min)> calcFraction(arr[j])){
				min = arr[j];
				minInd = j;
			}
		}
		arr[minInd] = arr[i];
		arr[i] = min;
	}
}

double calcFraction(struct fraction f){
	return (double)f.numerator / f.denominator;
}

void printArray(struct fraction arr[], int length){
	for(int i = 0; i < length; i++){
		printf("%d/%d  ", arr[i].numerator, arr[i].denominator);
	}
	printf("\n");
}
