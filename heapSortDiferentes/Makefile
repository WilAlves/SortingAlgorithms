all: compilar_objeto compilar_binario

compilar_objeto:
	gcc -c main.c heap.c -w

compilar_binario:
	gcc main.o heap.o -o heapSort -w

testar:
	./heapSort 10
#	./heapSort 100
#	./heapSort 1000
#	./heapSort 10000
#	./heapSort 100000
#	./heapSort 1000000
