# SortingAlgorithms

Implemente os algoritmos de ordenação heapsort e quicksort em programas que ordenem vetores de inteiros gerados aleatoriamente. Apresente uma análise de custo para cada algoritmo e em seguida considere que os algoritmos serão usados para:
a. Ordenar vetores numéricos onde em média 90% dos elementos têm o mesmo valor e os demais apresentem valores distintos e distribuídos de maneira uniforme ao longo do vetor.
b. Ordenar vetores onde não há elementos repetidos e chaves foram inseridas de maneira aleatória.

Apresente para cada item testes empíricos para avaliar o desempenho dos algoritmos em função do aumento do tamanho da entrada. Gere gráficos com curvas de tempo de execução e avalie as curvas para tecer conclusões sobre o desempenho dos algoritmos estudados. Ao final, com base na análise dos algoritmos e dos resultados dos testes, indique o melhor algoritmo para diferentes tamanhos de entrada e nas duas situações apresentadas


# ordenacaoExterna
Implementação de um algoritmo de ordenção usando o heap sort e quick sort


# Compilar os arquivos
O codigo roda em qualquer plataforma:

-> Linux
	* GCC
	* Todos os passos podem ser feito pelo terminal

-> Windows
	* Qualquer IDE
	* Qualquer editor modo texto
	* GCC

Vc pode compilar os arquivos de duas formas

digitando apenas:

make

ou compilar manualmente

gcc -c ./src/gerar_arquivo.c ./src/gerar_arquivo_main.c

gcc ./src/gerar_arquivo.o ./src/gerar_arquivo_main.o -o gerador

gcc -c ./src/ordenar_arquivo.c ./src/ordenar_arquivo_main.c

gcc ./src/ordenar_arquivo.o ./src/ordenar_arquivo_main.o -o ordenar

gcc -c ./src/ler_arquivo_gerado.c

gcc ./src/ler_arquivo_gerado.o -o ler

#executar: gerar arquivo

make gerar

ou

./gerador nome_arquivo tamanho_arquivo

#executar: ordenar arquivo

make order

ou

./ordenar entrada_arquivo saida_arquivo memoria K

#transformar arquivos binarios gerados em txt

make ler_ordenado ou make ler_desordenado

ou

./ler 1GB.bin > 1GB.txt
./ler out1GB.bin > out1GB.txt

