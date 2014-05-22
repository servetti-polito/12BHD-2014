#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DICHIARAZIONE */
    int A;
    int B;

    /* start */

    /* IN A, B */
    scanf("%i %i", &A, &B);

    /* condizione A > B */
    if( A>B )
    { /* blocco di istruzioni ramo Vero */
        /* OUT A */
        printf("%i", A);
    }
    else
    { /* blocco di istruzioni ramo Falso */
        /* OUT B */
        printf("%i", B);
    }
    /* stop */
    return 0;
}
