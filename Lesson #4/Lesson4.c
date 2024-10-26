#include <stdio.h>

int main(){
	int i = 1;
	int max = 10;
	
	/*
	*
	**
	***
	****
	*/
	while(i <= max) {
		int stars = 1;
		while(stars <= i) {
			printf("*");
			stars++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
	
	/*
	****
	***
	**
	*
	*/
	i = max;
	while(i > 0) {
		int stars = i;
		while (stars > 0) {
			printf("*");
			stars--;
		}
		printf("\n");
		i--;
	}
	printf("\n");
	
	/*
	****
     ***
      **
       *
	*/
	i = 0;
	while(i <= max) {
		int space = 0;
		while(space < i) {
			printf(" ");
			space++;
		}
		
		int stars = max - space;
		while (stars > 0){
			printf("*");
			stars--;
		}
		printf("\n");
		i++;
	}
	printf("\n");
	
	/*
	   *
      **
     ***
    ****
	*/
	i = max;
	while(i > 0) {
		int stars = 0;
		int space = i-1;
		while (space > 0) {
			printf(" ");
			space--;
		}
		while (stars <= max - i) {
			printf("*");
			stars++;
		}
		
		printf("\n");
		i--;
	}
	
	
	return 0;
}
