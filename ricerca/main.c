#include <stdio.h>
#include <stdlib.h>

/* AS 14.04.2014
   - Ricerca all'interno di un vettore
*/


#define N   4

#define VERO  1
#define FALSO 0

int main()
{
    int vettore[N] = { 123, 256, 11, 256};
    /* valore da cercare */
    int val;
    int i;
    /* variabile di stato: val e' presente o no */
    /* inizializzato al valore opposto di quello
       con cui lo modificherei */
    int presente = FALSO;

    printf("Immetti il valore intero da cercare: ");
    scanf("%d", &val);

    printf("Cerco il valore %d nel vettore.\n", val);
    for(i=0; i<N; i++) {
        printf("%d: [%3d] -> ", i, vettore[i]);
        /* elemento corrente: vettore[i] */
        if(vettore[i] == val) {
            printf("uguale");
            /* ricordarci SOLO se l'abbiamo trovato */
            presente = VERO;
            printf(" (presente:%d)", presente);
            /* una volta che lo trovo
               interrompo il ciclo */
            break;
        } else {
            printf("diverso");
            /* presente = FALSO; */  /* SBAGLIATO !!! */
            printf(" (presente:%d)", presente);
        }
        printf("\n");
    }

    /* se e' presente o no ! */
    /* ricordarsi cosa e' successo: una variabile di stato
       la chiamiamo "presente" e può essere vero (1) o falso (0)
    */
    if(presente) {
        printf("Valore %d e' presente nel vettore.\n", val);
    } else {
        printf("Valore %d NON e' presente nel vettore.\n", val);
    }



    return 0;
}
