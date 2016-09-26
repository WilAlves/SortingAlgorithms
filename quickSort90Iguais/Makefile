all: compilar_objeto compilar_binario

compilar_objeto:
	gcc -c main.c quick.c -w

compilar_binario:
	gcc main.o quick.o -o quickSort -w

testar:
	./quickSort 10
#	./quickSort 100
#	./quickSort 1000
#	./quickSort 10000
#	./quickSort 100000
#	./quickSort 1000000
