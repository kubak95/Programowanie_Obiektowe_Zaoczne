#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
#include <stdbool.h>

void init(struct stack *s1){
//s1 = malloc(sizeof(struct stack))
printf("1");

}

void destroy(struct stack *s1){
//free(s1);
	printf("2");
}

void clear(struct stack *s1){
	free(s1->data);
	//s1->top=NULL;
}


bool isEmpty(struct stack *s1){
	if(s1->top==0)
		return true;
	else
		return false;
}

void push(struct stack *s1, int numb){
printf("4");
}

void pop(struct stack *s1){
printf("5");
}

void peek(struct stack *s1){
	printf("elo\n");
}

bool isFull(struct stack *s1){
	return true;
}

