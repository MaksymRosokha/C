#include <stdio.h>

struct product{
	int id;
	char name[15];
	double weight;
	double price;
};

void printProduct(struct product p);


int main(){
	struct product p1 = { 0, "oven", 20, 200};
	struct product p2, p3;
	struct product* p3_ptr = &p3;
	
	p2.id = 1;
	printf("Product #%d\n", p2.id);
	printf("Enter name of the product: ");
	scanf("%s", &p2.name);
	printf("Enter weight of the product: ");
	scanf("%lf", &p2.weight);
	printf("Enter price of the product: ");
	scanf("%lf", &p2.price);
	
	printf("\n\n");
	
	p3_ptr->id = 2;
	printf("Product #%d\n", p3_ptr->id);
	printf("Enter name of the product: ");
	scanf("%s", &p3_ptr->name);
	printf("Enter weight of the product: ");
	scanf("%lf", &p3_ptr->weight);
	printf("Enter price of the product: ");
	scanf("%lf", &p3_ptr->price);
	
	printf("\n\n");
	
	printProduct(p1);
	printProduct(p2);
	printProduct(*p3_ptr);
}

void printProduct(struct product p){
	printf("Product #%d\n", p.id);
	printf("Product name: %s\n", p.name);
	printf("Product weight %.2lf\n", p.weight);
	printf("Product price %.2lf\n", p.price);
	printf("\n");
}
