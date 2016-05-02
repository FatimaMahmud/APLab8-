unsigned int c[1500][1500];

#define NUM_THREADS 32

int Arows ; 
int Acolumns;
int Bcolumns;
int Brows; 
int * mA;
int * vect;

struct Data {
	struct Matrix {
		int rows;
		int columns;
		int *matrixs;
	} matrixAA,vector;
};

void *init(void * data);