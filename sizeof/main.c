#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v;
    printf("La dimensione di un int e' %d byte.\n", sizeof(int));
    printf("La dimensione di un short e' %d byte.\n", sizeof(short));
    printf("La dimensione di un long int e' %d byte.\n", sizeof(long int));
    printf("La dimensione di un float e' %d byte.\n", sizeof(float));
    printf("La dimensione di un double e' %d byte.\n", sizeof(double));

    printf("La variabile v e' %d byte.\n", sizeof(v));
    return 0;
}
