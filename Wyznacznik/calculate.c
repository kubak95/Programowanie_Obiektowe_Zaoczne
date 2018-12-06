#include <stdio.h>
#include <stdlib.h>
#include "calculate.h"

void calculate(int** matrix, int size){
	int det=0;
	int det1=0;
	int det2=0;
	det1=(matrix[0][0]*matrix[1][1]*matrix[2][2])+(matrix[0][1]*matrix[1][2]*matrix[2][0])+(matrix[0][2]*matrix[1][0]*matrix[2][1]);
	det2=(matrix[2][0]*matrix[1][1]*matrix[0][2])+(matrix[2][1]*matrix[1][2]*matrix[0][0])+(matrix[2][2]*matrix[1][0]*matrix[0][1]);
	det=det1-det2;
	printf("\nWyznacznik wynosi: %i\n\n", det);
}

