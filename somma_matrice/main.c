#include <stdio.h>
#include <stdlib.h>

/* AS 8.5.2014
   - somma matrice per righe e per colonne
*/

#define N   32

int main()
{
    int mat[N][N];

    /* dim. effettive dei dati inseriti */
    int n;  /* matrice riempita n x n */

    int i, j;
    int somma;

    printf("Inserisci dimensione matrice: ");
    scanf("%d", &n);

    /* riempio la matrice con numeri da tastiera */

    printf("Inserisci %dx%d valori interi: ",n,n);
    /* per ogni riga i */
    for(i=0;i<n;i++) {
        /* per ogni colonna j */
        for(j=0;j<n;j++) {
            /* aspetto int * , ma ho trovato int */
            scanf("%d", &(mat[i][j]) );
        }
    }

    /* per ogni riga i */
    for(i=0;i<n;i++) {
        /* per ogni colonna j */
        for(j=0;j<n;j++) {
            /* aspetto int * , ma ho trovato int */
            printf("%4d", (mat[i][j]) );
        }
        printf("\n");
    }

    /* leggiamo la matrice per righe */
    /* acculatore x fare la somma
       somma = 0;
       ripetiamo somma += <qualcosa>
    */

    /* per ogni riga i */
    for(i=0;i<n;i++) {

    /* inizio riga */   somma = 0;

        /* per ogni colonna j */
        for(j=0;j<n;j++) {
            /* aspetto int * , ma ho trovato int */
            printf("%4d", (mat[i][j]) );
            somma += mat[i][j];
        }


    /* fine riga */ printf("| %d", somma);
        printf("\n");
    }

    /* per ogni colonna j */
    for(j=0;j<n;j++) {

    /* inizio colonna */   somma = 0;

        /* per ogni riga i */
        for(i=0;i<n;i++) {
            /* aspetto int * , ma ho trovato int */
            /* printf("%4d", (mat[i][j]) ); */
            somma += mat[i][j];
        }


    /* fine colonna */ printf("%4d", somma);
    }
    printf("\n");

    return 0;
}
