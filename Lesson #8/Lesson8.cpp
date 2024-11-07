#include <stdio.h>

void seven(int *p);
void max (int *p, int x, int y);
void factorial(unsigned int *p, unsigned int n);

int main() {
	int x = 7;
	int *p = &x;
	char c = '*';
	char *ch = &c;
	
	printf("Adress of %d is %d\n", x, p);
	printf("Adress of \'%c\' is %d\n", c, ch);
	x = 19;
	printf("Adress of %d is %d\n", x, p);
	
	
	int y = 13;
	p = &y;
	printf("%d %d %d\n", x, y, *p);
	
	
	printf("\n");
	int a = 2;
	printf("%d\n", a);
	seven(&a);
	printf("%d\n", a);
	
	
	
	printf("\n");
	int k;
	max(&k, 22, 5);
	printf("%d\n", k);
	
	
	printf("\n");
	unsigned int s;
	factorial(&s, 6);
	printf("%u\n", s);
	
	
	
	return 0;
}


void seven(int *p) {
	*p = 7;
}

void max (int *p, int x, int y) {
	*p = (x > y ) ? x : y;
}

void factorial(unsigned int *p, unsigned int n) {
	*p = 1;
	for(int i = 2; i <= n; i++) {
		*p *= i;
	}
}





