#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


/*typedef struct stack{

	int top;
	int size;
	int *data;

} stack;
*/
int main(){
stack s1;
init(&s1, 5);
printf("Empty: %d\n",isEmpty(&s1));
push(&s1, 7);
printf("Popped: %i\n",pop(&s1));
push(&s1, 15);
printf("Popped: %i\n",pop(&s1));
push(&s1, 72);
printf("Popped: %i\n",pop(&s1));
printf("Full: %d\n",isFull(&s1));
printf("Empty: %d\n",isEmpty(&s1));
push(&s1, 4);
push(&s1, 1);
push(&s1, 2);
printf("Popped: %i\n",pop(&s1));
printf("Popped: %i\n",pop(&s1));
printf("Popped: %i\n",pop(&s1));
printf("Popped: %X\n",pop(&s1));
printf("Popped: %X\n",pop(&s1));
clear(&s1);
destroy(&s1);
printf("destroyed\n");


	return 0;
}
