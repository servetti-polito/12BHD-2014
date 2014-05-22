#include <stdio.h>
#include <stdlib.h>

/* AS 3.4.2014
   - Ciclo while NON DEFINITO
*/

int main()
{
    int flag;

    printf("Prima della ripetizione.\n");

    /* while(  vuoi continuare 1/0 => flag  ) { */
    /* while( flag = scanf("Vuoi continuare? 1/0") ) */

    /* inizializzare flag */
    printf("Vuoi continuare? 1/0 ");
    scanf("%d", &flag);

    while ( flag == 1 ) { /* finche' flag e' vero ripeti */

        /* <blocco> */
        printf("Ripetizione.\n");

        /* modificare flag */
        printf("Vuoi continuare? 1/0 ");
        scanf("%d", &flag);
    }

    printf("Dopo la ripetizione.\n");

    return 0;
}
