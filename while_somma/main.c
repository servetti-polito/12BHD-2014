#include <stdio.h>
#include <stdlib.h>

/* AS 3.4.2014
   - Ciclo while NON DEFINITO
     - per fare la somma di un TOT di numeri interi
*/

int main()
{
    int flag;
    int  val;
    int somma;

    printf("Prima della ripetizione.\n");

    /* while(  vuoi continuare 1/0 => flag  ) { */
    /* while( flag = scanf("Vuoi continuare? 1/0") ) */

    /* inizializzo somma */
    somma = 0;

    /* inizializzare flag */
    printf("Vuoi continuare? 1/0 ");
    scanf("%d", &flag);

    while ( flag == 1 ) { /* finche' flag e' vero ripeti */

        /* <blocco> */

        /* chiedo un numero */
        printf("Immetti un numero intero: ");
        scanf("%d", &val);
        /* printf("Hai inserito: %d.\n", val); */

        /* calcolo la somma parziale */
        printf("somma(i-1) = %d.\n", somma);
        somma /* i */ = somma /* i-1 */+ val;
        printf("somma(i)   = %d.\n", somma);

        /* stampo il valore della somma */

        /* modificare flag */
        printf("Vuoi continuare? 1/0 ");
        scanf("%d", &flag);
    }

    printf("Dopo la ripetizione.\n");

    return 0;
}
