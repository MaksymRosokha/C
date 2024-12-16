#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

int main(){
	int length = 5;
	double** arr = (double**)malloc(length * sizeof(double*));
	
	for(int i = 0; i < length; i++){
		arr[i] = (double*)malloc((i+1) * sizeof(double));
	}
	
	int counter = 1;
	for(int i = 0; i < length; i++){
		for(int j = 0; j < i+1; j++){
			//arr[i][j] = (rand() % 10) + ((rand() % 100) / 100.0);
			arr[i][j] = counter++;
		}
	}
	
	for(int i = 0; i < length; i++){
		for(int j = 0; j < i+1; j++){
			printf("%.2lf\t", arr[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < length; i++){
		free(arr[i]);
	}
	free(arr);
	
	
	struct node* n1 = malloc(sizeof(struct node));
	n1->data = 5;
	n1->next = NULL;
	
	struct node* n2 = malloc(sizeof(struct node));
	n2->data = 6;
	n2->next = n1;
	
	return 0;
}
