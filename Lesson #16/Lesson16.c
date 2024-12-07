#include <stdio.h>
#include <math.h>

struct point{
	double x, y;
};

struct circle{
	struct point position;
	double radius;
};

unsigned int countPairsOfCommonPoints(struct circle *circles, unsigned length);
void copyCirclesWhichIncludePosition00(struct circle *circles1, int length1, struct circle *circles2, int length2);
void transformByOX(struct circle *c);
struct circle trasnformByOY(struct circle c);

double getDistance(double x1, double y1, double x2, double y2);
void printCircle(struct circle c);
void printCircles(struct circle circles[], int length);

int main(){
	struct circle circles1[5] = {{{1,3},1}, {{4,0},6}, {{8,3},2}, {{5,9},3}, {{9,2},4}};
	unsigned int length1 = sizeof(circles1) / sizeof(circles1[0]);
	
	unsigned int amountPairs = countPairsOfCommonPoints(circles1, length1);
	printf("Amount circle pairs of common points: %u\n\n", amountPairs);
	
	
	struct circle circles2[2];
	unsigned int length2 = sizeof(circles2) / sizeof(circles2[0]);
	
	printf("Circles that include position (0,0):\n");
    copyCirclesWhichIncludePosition00(circles1, length1, circles2, length2);
    printCircles(circles2, length2);
	
	return 0;
}

unsigned int countPairsOfCommonPoints(struct circle *circles, unsigned length){
	unsigned count = 0;
	
	for(int i = 0; i < length; i++){
		for(int j = i+1; j < length; j++){
			double distanceOfCirclesCenter = getDistance(
				circles[i].position.x, circles[i].position.y, 
				circles[j].position.x, circles[j].position.y
			);
			double sumRadiuses = circles[i].radius + circles[j].radius;
			
			if(distanceOfCirclesCenter <= sumRadiuses){
				count++;
			}
		}	
	}
	
	return count;
}

void copyCirclesWhichIncludePosition00(struct circle *circles1, int length1, struct circle *circles2, int length2){
	int lastCircleInd = 0;
	for(int i = 0; i < length2; i++){
		for(int j = lastCircleInd; j < length1; j++){
			double distanceTo00 = getDistance(circles1[j].position.x, circles1[j].position.y, 0, 0);
			if(distanceTo00 <= circles1[j].radius){
				circles2[i] = circles1[j];
				lastCircleInd = j+1;
				break;
			}
		}	
	}
}

void transformByOX(struct circle *c){
	c->position.x *= -1;
}

struct circle trasnformByOY(struct circle c){
	struct circle newCircle = {{c.position.x, c.position.y * (-1)}, c.radius};
	return newCircle;
}

double getDistance(double x1, double y1, double x2, double y2){
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

void printCircle(struct circle c){
	printf("Position: (%.2lf, %.2lf)\n", c.position.x, c.position.y);
	printf("Radius: %.2lf\n\n", c.radius);
}

void printCircles(struct circle circles[], int length){
	for(int i = 0; i < length; i++){
		printCircle(circles[i]);
	}
}

