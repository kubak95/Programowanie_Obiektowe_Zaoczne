#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


typedef struct{

	int top;
	int size;
	int *data;

} stack;


void init(stack* s1, int size);
void destroy(stack* s1);
void clear(stack* s1);
bool isEmpty(stack* s1);
void push(stack* s1, int numb);
int pop(stack* s1);
void peek(stack* s1);
bool isFull(stack* s1);
