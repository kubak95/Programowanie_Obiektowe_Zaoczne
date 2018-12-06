#include <stdio.h>
#include <stdlib.h>
#include "allocate.h"

int** allocate(int size){
	int** matrix = (int **)malloc(size * sizeof(int *));
	for (int i=0; i<size; i++){
	       	matrix[i] = (int *)malloc(size * sizeof(int));
	}
	return matrix;
}
