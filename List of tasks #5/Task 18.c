#include <stdio.h>
#include <stdlib.h>

void print_array(double* arr, int length);
void complete_array(double* arr, int length);
double* create_array(int k);


int main() {

	int n, m;
	
	printf("Enter size for array t1: ");
	scanf("%d", &n);
	printf("Enter size for array t2: ");
	scanf("%d", &m);
	
	double* t1 = create_array(n);
	double* t2 = create_array(m);
	double* t3 = create_array(n+m);
	
	complete_array(t1, n);
	complete_array(t2, m);
	
	double* end_t1 = t1 + n;
	double* end_t2 = t2 + m;
	double* end_t3 = t3 + n + m;
	
	double* t1_copy = t1;
	double* t2_copy = t2;
	double* t3_copy = t3;
	
	while(t1_copy < end_t1){
		*t3_copy = *t1_copy;
		
		t1_copy++;
		t3_copy++;
	}
	while(t2_copy < end_t2){
		*t3_copy = *t2_copy;
		
		t2_copy++;
		t3_copy++;
	}
	
	
	printf("\nArray t1: \n");
	print_array(t1, n);
	printf("Array t2: \n");
	print_array(t2, m);
	printf("Array t3: \n");
	print_array(t3, n+m);


	free(t1);
	free(t2);
	free(t3);
	
	return 0;
}

double* create_array(int k){
	return (double*) malloc(sizeof(double) * k);
}


void complete_array(double* arr, int length){
	double* end = arr + length;
	
	for (; arr < end; arr++) {
	    *arr = (rand() % 100) + (double)(rand() % 100)/100;
	}
}


void print_array(double* arr, int length){
	double* end = arr + length;
	
	for (int i = 0; arr < end; arr++, i++) {
		printf("Array[%d] = %.2lf\n", i, *arr);
	}
	printf("\n");
}
