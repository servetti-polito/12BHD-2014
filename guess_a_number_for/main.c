#include <stdio.h>
#include <stdlib.h>

/* AS 7.4.2013
    Guess a number con for
    - il computer pensa un numero val
    - abbiamo a disposizione 5 tentativi per indovinarlo
    - se non indoviniamo ci viene detto il numero pensato
    - se indoviniamo viene interrotto il ciclo
      (salto i tentativi rimanenti)
*/

int main()
{
    int val;    /* valore pensato */
    int guess;  /* proposta dell'utente */
    int i;      /* contatore dei tentativi */

    /* pensa un numero */
    val = 55;

    /* ripeti per 5 volte */
    for( i=1  /* inizializzazione */ ;
         i<=5 /* condizione */       ;
         i++  /* aggiornamento */
        ) {

        /* chiedi un numero tra 0 e 100 */
        printf("Indovina un numero intero tra 0 e 100: ");

        /* leggi il numero */
        scanf("%d", &guess);
        /* printf("> Hai immesso il numero %d.\n", guess);*/

        /* confronta la proposta con il valore pensato */
        if( guess == val ) {
            /* indovinato */
            printf("Hai indovinato il numero pensato.\n");
            /* interrompo il ciclo */
            break;

        } else {
            /* sbagliato */
            printf("Non hai indovinato.\n");
        }

    }



    return 0;
}
