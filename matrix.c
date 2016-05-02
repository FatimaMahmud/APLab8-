#include "matrix.h"


void *init(void *data) {

	int Matrixrows = ((struct Data *) data)->matrixAA.rows;
	int Matrixcolumns = ((struct Data *) data)->matrixAA.columns;

	int vectorrows = ((struct Data *) data)->vector.rows;
	int vectorcolumns = 1;

	int *matrix = ((struct Data *) data)->matrixAA.matrixs;
	int *vector = ((struct Data *) data)->vector.matrixs;

	Arows = Matrixrows;
	Acolumns = Matrixcolumns;
	Bcolumns = vectorcolumns;
	Brows = vectorrows;
	mA = matrix;
	vect = vector;
	
	printf("Matrixrows: %d\n" , Matrixrows);
	printf("Matrixcolumns: %d\n" , Matrixcolumns);
	printf("vectorrows: %d\n" , vectorrows);
	printf("vectorcolumns: %d\n" , vectorcolumns);

	int i,j,k,l = 0 ;
	
	unsigned int values = 0;
	

	if (Matrixcolumns != vectorrows){
		printf( "\nColumns != Rows, Multiplication cannot be done\n");
		return 0;
	}

	printf("\nMatrixA");
	for (i = 0; i<Matrixrows; i++){
		for (j = 0; j<Matrixcolumns; j++){
			matrix[(i * Matrixcolumns) + j] = i;
			//printf("\n\t %d", matrix[(i * Matrixcolumns) + j]);
		}
		//printf("\n");
	}

	printf("\nvector");
	
	for (i = 0; i<vectorrows; i++){
		for (j = 0; j<vectorcolumns; j++){
			vector[(i * vectorcolumns) + j] = i;
			//printf("\n\t %d", vector[(i * vectorcolumns) + j]);
		}
		//printf("\n");
	}

}
