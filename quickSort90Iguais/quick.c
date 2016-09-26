#include "quick.h"

int gerar_numero_aleatorio()
{
    int numero = rand() ;
    return numero;
}

int gerar_indice_vetor(n)
{
    int indice = rand() % n;
    return indice;
}

void quick_sort(int *a, int esq, int dir) {
int i, j, x, y;

i = esq;
j = dir;
x = a[(esq + dir) / 2];

while(i <= j) {
while(a[i] < x && i < dir) {
i++;
}
while(a[j] > x && j > esq) {
j--;
}
if(i <= j) {
y = a[i];
a[i] = a[j];
a[j] = y;
i++;
j--;
}
}

if(j > esq) {
quick_sort(a, esq, j);
}
if(i < dir) {
quick_sort(a, i, dir);
}
}
