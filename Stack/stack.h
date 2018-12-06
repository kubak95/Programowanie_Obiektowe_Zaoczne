#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


typedef struct stack{

	int top;
	int size;
	int *data;

} stack;


void init(struct stack * s1);
void destroy(struct stack * s1);
void clear(struct stack * s1);
bool isEmpty(struct stack * s1);
void push(struct stack * s1, int numb);
void pop(struct stack * s1);
void peek(struct stack * s1);
bool isFull(struct stack * s1);
