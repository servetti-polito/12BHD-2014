#include <stdio.h>
#include <stdlib.h>

/* AS 14.4.2014
   - Operazioni su vettori
*/

#define N  4

int main()
{
    /* vettore di 4 elementi di tipo int */
    /* <tipo> <etichetta> [ <num_el> ]; */
    int vettore [ N ];
    int i;
    int vettore2 [ N ] = { 4, 3, 2, 1};
    int somma_v  [ N ];

    /* riempiamo il vettore con 4 numeri
       letti da tastiera */
    printf("Inserisci %d numeri interi: ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &vettore[i]);   /* posizione i-esima */
    }
    for(i=0; i<N; i++)
    {
        printf("%d ", vettore[i]);
    }
    printf("\n");
    /* scorrimento vettore al contrario
       i = 3 2 1 0
    */
    for(i=(N-1); i>=0; i--) {
        printf("%d ", vettore[i]);
    }
    printf("\n");
    /* scorro il vettore un elemento sì e uno no
       i = 0 2 / 4
    */
    for(i=0; i<N; i+=2)
    {
        printf("%d ", vettore[i]);
    }
    /* somma di vettore e vettore2 */
    /* somma_v = vettore + vettore2; SBAGLIATO! */
    /* l'operazione deve essere fatta per ogni singolo elemento */
    printf("\nSomma: ");
    for(i=0; i<N; i++) {
        somma_v[i] = vettore[i] + vettore2[i];
        printf("%d ", somma_v[i]);
    }

    return 0;
}
