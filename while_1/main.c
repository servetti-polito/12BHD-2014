#include <stdio.h>
#include <stdlib.h>

/* AS 3.4.2014
   - Ciclo while DEFINITO
*/

int main()
{
    int contatore;  /* per contare */

    printf("Prima della ripetizione.\n");

    /* Se condizione FALSA dall'inizio
       il blocco non viene eseguito */

    /* E' fondamentale fare sì che la condizione
       diventi (prima o poi) falsa */

    /* Ripetere il blocco 10 volte */

    contatore = 1;  /* parto da 1 */
    /* ripeti finche' <condizione> e' vera */
    /* ripeti finche' <contatore e' minore o uguale a 10> e' vero */
    while ( contatore <= 10) {
        /* <blocco_istruzioni_da_ripetere> */
        printf("Ripetizione.\n");

        /* modificare la variabile contatore */
        contatore = contatore + 1; /* += 1 */   /* conto per uno */
    }

    printf("Dopo la ripetizione.\n");

    return 0;
}
