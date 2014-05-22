#include <stdio.h>
#include <stdlib.h>

/* 31.3.2014
   - Istruzione IF
   - Massimo tra due numeri a e b (interi)
*/

int main()
{
    /* dichiarazione */
    int a;
    int b;

    int m;  /* massimo */

    /* assegnazione */
    a = 17;  b = 10;

    /* if(a>b) m=a; else m=b; */

    /* istruzione IF */
    if(a > b)
    {
        /* se (a>b) */
        m = a;
    }
    else
    {
        /* se not (a>b), se a<=b */
        m = b;
    }

    printf("Il massimo tra %d e %d e' %d.\n", a, b, m);

    return 0;
}
