#include <stdio.h>

#define length 10

void print_array(double arr[]);
void complete_array(double arr[]);

int main() {	
	double arr[length];
	
	complete_array(arr);
	print_array(arr);
	
	return 0;
}

void complete_array(double arr[]){
	for(int i = 0; i < length; i++) {
		printf("Enter element [%d]=", i);
		scanf("%lf", &arr[i]);
	}
}

void print_array(double arr[]){
	for(int i = 0; i < length; i++) {
		printf("Array[%d] = %.2lf\n", i, arr[i]);
	}
}
