# SortingAlgorithms

Implemente os algoritmos de ordenação heapsort e quicksort em programas que ordenem vetores de inteiros gerados aleatoriamente. Apresente uma análise de custo para cada algoritmo e em seguida considere que os algoritmos serão usados para:
a. Ordenar vetores numéricos onde em média 90% dos elementos têm o mesmo valor e os demais apresentem valores distintos e distribuídos de maneira uniforme ao longo do vetor.
b. Ordenar vetores onde não há elementos repetidos e chaves foram inseridas de maneira aleatória.

Apresente para cada item testes empíricos para avaliar o desempenho dos algoritmos em função do aumento do tamanho da entrada. Gere gráficos com curvas de tempo de execução e avalie as curvas para tecer conclusões sobre o desempenho dos algoritmos estudados. Ao final, com base na análise dos algoritmos e dos resultados dos testes, indique o melhor algoritmo para diferentes tamanhos de entrada e nas duas situações apresentadas

# Compilar os arquivos
O codigo roda em qualquer plataforma:
Foram desenvolvido na linguagem C na plataforma Linux-Ubuntu, para atender os requesitos de cada questão foi usada manipulação de vetor.
Para determinar o tempo usamos a biblioteca time.h com variaveis de inicio e fim, essas só usadas na ordenação. todo processo de gerar valores aleatorios não foram contabilizados no tempo.
Criamos o arquivo Makefile esse que se encarrega de automatizar nossos teste facilitando nossa compilação e testes.

-> Linux
	* GCC
	* Todos os passos podem ser feito pelo terminal

-> Windows
	* Qualquer IDE
	* Qualquer editor modo texto
	* GCC

digitando apenas:

make

#executar: gerar os testes

make testar

