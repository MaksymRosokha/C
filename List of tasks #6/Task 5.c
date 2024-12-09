#include <stdio.h>
#include <stdlib.h>

struct point{
	float x;
	float y;
};

int isAboveOX(struct point p);
void changeSymetryByOX(struct point* p);
void changeSymetryBy00(struct point* p);
int completeArrayAndCountPointsAboveOX(struct point points[], int length);
void printInformationAboutPoints(struct point points[], int length);

void completeArray(struct point points[], int length);
void printArray(struct point points[], int length);

int main(){
	int length = 10;
	struct point points[length];
	
	printf("Points above OX: %d\n\n", completeArrayAndCountPointsAboveOX(points, length));
	printInformationAboutPoints(points, length);
	
	return 0;
}

int isAboveOX(struct point p){
	return p.x > 0 ? 1 : 0;
}

void changeSymetryByOX(struct point* p){
	p->x *= -1;
}

void changeSymetryBy00(struct point* p){
	p->x *= -1;
	p->y *= -1;
}

int completeArrayAndCountPointsAboveOX(struct point points[], int length){
	int count = 0;
	completeArray(points, length);
	printArray(points, length);
	
	for(int i = 0; i < length; i++){
		if(points[i].x > 0){
			count++;
		}
	}
	
	return count;
}

void printInformationAboutPoints(struct point points[], int length){
	int onXorY = 0;
	int minusXminusY = 0; 
	int minusXplusY = 0; 
	int plusXminusY = 0;
	int plusXplusY = 0;
	
	completeArray(points, length);
	printArray(points, length);
	
	for(int i = 0; i < length; i++){
		if (points[i].x == 0 || points[i].y == 0){
			onXorY++;
		}
		if (points[i].x < 0 && points[i].y < 0){
			minusXminusY++;
		}
		if (points[i].x < 0 && points[i].y > 0){
			minusXplusY++;
		}
		if (points[i].x > 0 && points[i].y < 0){
			plusXminusY++;
		}
		if (points[i].x > 0 && points[i].y > 0){
			plusXplusY++;
		}
	}
	
	printf("There are %d which lying on the axes\n", onXorY);
	printf("There are %d which lying on the quadrant of -x and -y\n", minusXminusY);
	printf("There are %d which lying on the quadrant of -x and +y\n", minusXplusY);
	printf("There are %d which lying on the quadrant of +x and -y\n", plusXminusY);
	printf("There are %d which lying on the quadrant of +x and +y\n", plusXplusY);
}

void completeArray(struct point points[], int length){
	for(int i = 0; i < length; i++){
		points[i].x = (rand() % 20) - 10;
		points[i].y = (rand() % 20) - 10;
	}
}

void printArray(struct point points[], int length){
	printf("---Points---\n");
	for(int i = 0; i < length; i++){
		printf("(%.1f,%.1f)\n", points[i].x, points[i].y);
	}
	printf("\n");
}
