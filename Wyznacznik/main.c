/*
 * 1.allocate
 * 2. free
 * 3. display
 * 4. calculate
 */

#include <stdio.h>
#include <stdlib.h>
#include "display.h"
#include "allocate.h"
#include "insert.h"
#include "freeMatrix.h"
#include "calculate.h"
int main()
{
	int size=3;
	int** matrix=allocate(size);
	insert(matrix, size);
	display(matrix, size);
	calculate(matrix, size);
	freeMatrix(matrix, size);
}
