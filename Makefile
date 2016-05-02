CXX = gcc
OUTPUT_FLAGS = -o
COMPILE_FLAGS = -c
LIBS = -pthread
OBJS = vector.o matrix.o main.o
PHONY_FILES = *.o

matrix : ${OBJS}
	${CXX} ${LIBS} ${OUTPUT_FLAGS} $@ ${OBJS}

vector.o : vector.c
	${CXX} ${COMPILE_FLAGS} vector.c

matrix.o : matrix.c
	${CXX} ${COMPILE_FLAGS} matrix.c

main.o : main.c
	${CXX} ${COMPILE_FLAGS} main.c

clean :
	rm -rf ${PHONY_FILES}
