#include <stdio.h>
#include <stdlib.h>

/* costante che rappresenta la dimensione del vettore */
#define N 11

/* AS 9.4.2014
   - Vettori, le basi
*/

int main()
{
    /* dichiarazione piu' inizializzazione */
    int a = 11;

    /* dichiarazione */
    /* tra quadre il numero di celle da riservare */
                    /* inizializzazione */
    /*               0   1   2   3  ..
                   |   |   |   |   | ..                           */
    int dati[N] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 00, 1 };
    int vett[10] = { 0 ,  0,  0,  0,  0,  0,  0,  0,  0,  0 };
    int vett0[10] = { 0 };

    int i;

    dati[0] = 11;
    dati[1] = 22;
    /* ... */
    dati[4] = 12345;

    /* printf("%d\n", dati[ 4 ]); */

    printf("Quale posizione vuoi leggere? ");
    scanf("%d", &i);
    /* controllare sempre il valore degli indici
       da cui leggere e/o scrivere */
    if(i>=0 && i<=(N-1)) {
        /* posizione indicata con una variabile */
        printf("In posizione %d e' presente il valore %d\n", i, dati[ i ]);
    }

    if(i<(N-1)) {
        printf("Nella posizione successiva c'e' il numero: %d\n", dati[i+1]);
    }

    /* i: inizializzato a 0 (i=0)
       i: viene incrementato di 1 ad ogni ciclo (i++)
       finche' i e' minore del numero di celle disponibili */
    for(i=0; i<N; ;i++)
    {
        printf("%d ", dati[i]); /* i = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 */
    }


    return 0;
}
