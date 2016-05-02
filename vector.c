#include "vector.h"
#include <pthread.h>


void *multiply(void * t){
	int i,j,k,values = 0;
	
	int DataValues = (int)t;  
	int from = (DataValues * Arows)/NUM_THREADS;
	int to = ((DataValues+1) * Arows)/NUM_THREADS; 
	
	for (i = from; i < to; i++) {
			for (j = 0; j < Bcolumns; j++) {
				for (k = 0; k < Brows; k++)
					(values += (mA[(i*Acolumns) + k] * vect[(k*Bcolumns) + j]));
				c[i][j] = values;
				values = 0;
			}
		}
}

void printing(){

int i,j,k = 0;
	printf("\n");
	printf("Matrix and Vector Multiplication\n");
	for (k = 0; k < Arows; k++){
		for (j = 0; j < Acolumns; j++){}
			printf("\t %d", c[k][j]);
		printf("\n");
	}
	printf("\n");
	
	pthread_exit(NULL);
	
}

