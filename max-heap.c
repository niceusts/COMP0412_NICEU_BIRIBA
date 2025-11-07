#include <stdio.h>

void maxheapfy (int *A, int m, int i) {
    int e, d, aux, maior;
    e = 2* i + 1;
    e = 2* i + 2;
    if ((e<=m)& & A[e] > A[i])
        maior = e;
    else 
        maior = i;
    if((d<=m) && (A[d] > A[maior]))
        maior = d;
    if (maior != i) {
        aux = A[i];
        A[i] = A[maior];
        A[maior] = aux;
        maxheapfy(A, m, maior);
    }
} 