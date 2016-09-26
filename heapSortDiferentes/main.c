#include "heap.h"

int main(int argc, char *argv[])
{
    int n,i, repetido, numero,contador, pesquisa;
    clock_t inicio, fim;

    srand(time(NULL));
    int vetor[atol(argv[1])];

    if (argc != 2)
    {
        printf("\nVc deve usar: %s <tamanho do vetor> \n", argv[0]);
        return 1;
    }
    else
    {
    contador = 1;
    do
    {
        repetido = 1;
        numero=gerar_numero_aleatorio();
        for (pesquisa = 1; pesquisa <= (atol(argv[1])); pesquisa++)
        {
        if (numero == vetor[pesquisa])
            repetido = 0;
        }
        if (repetido == 0)
            continue; // não incrementa a variavel

        vetor[contador] = numero;
        contador++;
    }while(contador <= (atol(argv[1]))); 

        printf("Valores gerados: ");
        printf("\n");
        for(i=1;i<=(atol(argv[1]));i++)
            printf("\t%d", vetor[i]);

        inicio = clock();
        HeapSort(vetor,(atol(argv[1])));
        fim = clock();

        printf("\n");

        printf("Valores ordenados: ");
        printf("\n");
        for(i=1;i<=(atol(argv[1]));i++)
            printf("\t%d",vetor[i]);

        double tempo_gasto = (double) (fim- inicio) / CLOCKS_PER_SEC;
        printf("\n");

        printf("\nTEMPO GASTO: %lf\n", tempo_gasto * 1000);
    }
    return 0;
}
