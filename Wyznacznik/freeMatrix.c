#include <stdio.h>
#include <stdlib.h>
#include "freeMatrix.h"

void freeMatrix(int** matrix, int size){
	for (int i=0; i<size; i++){
		int* ptr=matrix[i];
		free(ptr);
	}
	free(matrix);
}
