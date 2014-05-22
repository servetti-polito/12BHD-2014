#include <stdio.h>
#include <stdlib.h>

/* AS 7.4.2014
   - Cicli annidati
*/

int main()
{
    int i, j;

    for(i=1; i<=5;
        i++) {

        for(j=1; j<=5-i;
            j++) {
            /* printf("i: %d, j = %d\n", i, j); */
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
