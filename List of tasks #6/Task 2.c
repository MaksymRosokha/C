#include <stdio.h>

struct product{
	int id;
	char name[15];
	double weight;
	double price;
};

void completeProduct(struct product* p);
void printProduct(struct product p);


int main(){
	struct product p1, p2;
	
	completeProduct(&p1);
	printf("\n");
	completeProduct(&p2);
	
	printf("\n\n");
	
	printProduct(p1);
	printProduct(p2);
}

void completeProduct(struct product* p){
	printf("---Complete product:---\n");
	printf("Enter id of the product: ");
	scanf("%d", &p->id);
	printf("Enter name of the product: ");
	scanf("%s", &p->name);
	printf("Enter weight of the product: ");
	scanf("%lf", &p->weight);
	printf("Enter price of the product: ");
	scanf("%lf", &p->price);
}

void printProduct(struct product p){
	printf("Product #%d\n", p.id);
	printf("Product name: %s\n", p.name);
	printf("Product weight %.2lf\n", p.weight);
	printf("Product price %.2lf\n", p.price);
	printf("\n");
}
