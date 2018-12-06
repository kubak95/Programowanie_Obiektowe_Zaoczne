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
struct stack *s1=NULL;
init(s1);
//printf("%d",isEmpty(s1));
push(s1, 523);
push(s1, 49);
push(s1, 51);
push(s1, 0);
push(s1, 25);
push(s1, 12);
push(s1, 7);
pop(s1);
push(s1, 15);
push(s1, 65);
pop(s1);
push(s1, 72);
pop(s1);
printf("%d",isFull(s1));
clear(s1);
push(s1,124);
destroy(s1);


	return 0;
}
