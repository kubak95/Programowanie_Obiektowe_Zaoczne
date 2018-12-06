#include <stdio.h>
#include <stdlib.h>
#include "display.h"

void display(int** matrix, int size){
	for (int i=0; i<size; i++){
		for (int j=0; j<size; j++){
			printf("%4i ", matrix[i][j]);
		}
		printf("\n");
	}
}
