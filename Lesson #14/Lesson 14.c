#include <stdio.h>

struct fraction{
	int numerator;
	unsigned denominator;
};

struct fraction suma(struct fraction u1, struct fraction u2){
	struct fraction u;
	u.numerator = u1.numerator * u2.denominator + u1.denominator * u2.numerator;
	u.denominator = u1.denominator * u2.denominator;
	return u;
};

void sort(double *arr, int n);
void printArray(double arr[], int length);
double *minBetweenIndexes(double *index1, double *index2);
	
int main(){
	struct fraction u = {2,3};
	struct fraction *p = &u;
	printf("%d/%u\n", p->numerator, p->denominator);
	p->denominator = 5;
	printf("%d/%u\n", p->numerator, p->denominator);

	return 0;
}

double *minBetweenIndexes(double *index1, double *index2){
	double *min = index1;
	for(; index1 <= index2; index1++){
		if(*min > *index1){
			min = index1;
		}
	}
	return min;
}

void sort(double *arr, int n) {
	for(int i = 0; i < n; i++){
		double min = arr[i];
		int minInd = i;
		for(int j = i; j < n; j++){
			if(min > arr[j]){
				min = arr[j];
				minInd = j;
			}
		}
		arr[minInd] = arr[i];
		arr[i] = min;
	}
}

void printArray(double arr[], int length){
	for(int i = 0; i < length; i++){
		printf("%f\n", arr[i]);
	}
}
