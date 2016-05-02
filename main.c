#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "matrix.h"
#include "vector.h"


int main() {
	pthread_t threadName[NUM_THREADS];

	int i,t = 0;
	struct Data data[] = {{{1500, 1500, malloc(sizeof(int) * 2250000) } , {1500, 1500, malloc(sizeof(int) * 2250000)}}};
	init((void *) &data);
	for(t=0; t<NUM_THREADS; t++){
			pthread_create(&threadName[t], NULL, multiply, (void*)t);
			
	}
	for (i = 0; i < NUM_THREADS; i++)
			pthread_join (threadName[i], NULL);
			
	printing();
	pthread_exit(NULL);
}
