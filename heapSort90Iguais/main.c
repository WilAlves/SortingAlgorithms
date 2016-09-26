#include "heap.h"

int main(int argc, char *argv[])
{
    int n,i, repetido, numero,contador, pesquisa, qtde10, indice, igual;
    clock_t inicio, fim;

    srand(time(NULL));
    int vetor[atol(argv[1])];
    int flag_vetor[atol(argv[1])];

    if (argc != 2)
    {
        printf("\nVc deve usar: %s <tamanho do vetor> \n", argv[0]);
        return 1;
    }
    else
    {
        qtde10 = atol(argv[1]) * 0.1;
        igual = gerar_numero_aleatorio();

        for(i=1;i<=atol(argv[1]);i++)
        {
            vetor[i] = igual; 
        }

        for(i=1;i<=qtde10;i++)
        {
            indice = gerar_indice_vetor(atol(argv[1]));
            vetor[indice] = gerar_numero_aleatorio();
        }

            printf("Valores gerados: ");
            printf("\n");
            for(i=1;i<=atol(argv[1]);i++)
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
