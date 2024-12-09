#include <stdio.h>

struct product{
	int id;
	char name[15];
	double weight;
	double price;
};

void completeProduct(struct product* p, int length);
void printProduct(struct product* p, int length);


int main(){
	int length = 2;
	struct product p[length];
	
	completeProduct(p, length);
	
	printf("\n\n");
	
	printProduct(p, length);
}

void completeProduct(struct product* p, int length){
	int* end = p + length;
	
	while(p < end){
		printf("---Complete product:---\n");
		printf("Enter id of the product: ");
		scanf("%d", &p->id);
		printf("Enter name of the product: ");
		scanf("%s", &p->name);
		printf("Enter weight of the product: ");
		scanf("%lf", &p->weight);
		printf("Enter price of the product: ");
		scanf("%lf", &p->price);
		printf("\n");
		p++;
	}
}

void printProduct(struct product* p, int length){
	int* end = p + length;
	
	while(p < end){
		printf("Product #%d\n", p->id);
		printf("Product name: %s\n", p->name);
		printf("Product weight %.2lf\n", p->weight);
		printf("Product price %.2lf\n", p->price);
		printf("\n");
		p++;
	}
}
