#include <stdio.h>
#include <stdlib.h>

int licz(double *p1, double *p2, double x);

int main() {	
	double t[] = {8.0, 2.0, 1.0, 6.0, 2.0, 7.0, 5.0, 2.0, 9.0};
 	int n = licz(t+1, t+8, 2.0);
 	printf("%d\n", n);
	
	return 0;
}

int licz(double *p1, double *p2, double x){
	int amount = 0;
	
	while(p1 < p2){
		if(*p1 == x){
			amount++;
		}
		
		p1++;
	}
	return amount;
}
