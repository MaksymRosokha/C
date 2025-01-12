#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merger(char *s3, const char* s1, const char* s2);

int main(){
	char s1[] = "First sentence. ";
	char s2[] = "Second sentence.";
	
	char s3[strlen(s1) + strlen(s2)];
	merger(s3, s1, s2);
	
	printf("%s", s3);
	
	return 0;
}

void merger(char *s3, const char* s1, const char* s2){
	int s1Length = strlen(s1);
	int s2Length = strlen(s2);
	
	for(int i = 0; i < s1Length; i++){
		*s3 = s1[i];
		s3++;
	}
	
	for(int i = 0; i < s2Length; i++){
		*s3 = s2[i];
		s3++;
	}
	
	*s3 = '\0';
}
