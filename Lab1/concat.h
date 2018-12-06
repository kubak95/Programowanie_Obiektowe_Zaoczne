#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "concat.h"

//concat.c

void concat(char* a, char* b){
	char* str=(char*) malloc((1+strlen(a)+strlen(b))*sizeof(char));
	for (int i=0;i<strlen(a);i++){
		*(str+i)=*(a+i);
	}
	for (int i=0;i<strlen(b);i++){
		*(str+(strlen(a)+i))=*(b+i);
	}
	printf("%s\n", str);
	free(str);
}
