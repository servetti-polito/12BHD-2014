#include <stdio.h>
#include <stdlib.h>

/* AS 2014.04.16
   - Massimo comune divisore
*/

int main()
{
    int a = 34;
    int b = 18;

    int r;  /* resto */

    int max, min;

    if(a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    do {
        /*** operazione da effettuare ***/
        /* 0 = 16 % 2 */
        r = max % min;

        /*** modifiche per preparare il ciclo successivo ***/
        /*2*/
        max = min;
        min = r;

    } while (r!=0);

    printf("MCD: %d", max);


    return 0;
}
