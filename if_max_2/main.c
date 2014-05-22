#include <stdio.h>
#include <stdlib.h>

/* 31.3.2014
   - Istruzione IF
   - Massimo tra tre numeri a, b e c (interi)
*/

int main()
{
    /* dichiarazione */
    int a;
    int b;
    int c,d;

    int m;  /* massimo */

    /* assegnazione */
    a = 17;  b = 10;

    /* if(a>b) m=a; else m=b; */

    /* ALTERNATIVA */
    if(a>b && a>c)       { m = a; }
    else {
         if(a>b && !(a>c))    { m = c; }
         else if(!(a>b) && (b>c))  { m = b; }
              else if(!(a>b) && !(b>c)) { m = c; }
    }

    if(a>b && a>c && a>d) { m = a; }

    /* istruzione IF */
    if(a > b) {
        /* se (a>b)
           il max e' a oppure c */
        if(a > c) {
            /* dentro if(a>b) ramo VERO
               dentro if(a>c) ramo VERO
                 eseguita se (a>b && a>c) e' VERO
            */
            m = a;
        } else {
            /* dentro if(a>b) ramo VERO
               dentro if(a>c) ramo FALSO
                 eseguita se (a>b && !(a>c)) e' VERO
            */
            m = c;
        }
    } else {
        /* se not (a>b), se a<=b */
        if(b > c) {
            m = b;
        } else {
            m = c;
        }
    }

    printf("Il massimo tra %d e %d e' %d.\n", a, b, m);

    return 0;
}
