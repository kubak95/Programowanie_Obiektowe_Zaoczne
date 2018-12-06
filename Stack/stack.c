#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
#include <stdbool.h>

void init(stack *s1, int size){
	int *newItem;
	newItem=(int *)malloc(sizeof(int)*size);

	s1->data=newItem;
	s1->size=size;
	s1->top=0;
}

void destroy(stack *s1){
	free(s1->data);
	s1->data=NULL;
	s1->size=0;
	s1->top=0;
}


void clear(stack *s1){
	s1->top=0;
}

void push(stack *s1, int numb){
	if (isFull(s1)){
		printf("Stack is full, nothing to do\n");
	}
	else{
	s1->top++;
	s1->data[s1->top]=numb;
	}
}


int pop(stack *s1){
	if (isEmpty(s1)){
		printf("Stack is empty, nothing to pop\n");
	return -559038737;
	}
	else
		return s1->data[s1->top--];
}


void peek(stack *s1){
	printf("elo\n");
}

bool isEmpty(stack *s1){
	if(s1->top==0)
		return true;
	else
		return false;
}
bool isFull(stack *s1){
	if(s1->top >= s1->size-1)
		return true;
	else
		return false;
}

