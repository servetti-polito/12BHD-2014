#include <stdio.h>
#include <stdlib.h>

/* AS 16.4.2014
   - Funzioni
*/

/* visibilità delle variabili */

int pippo = 10; /* globale */


/* dichiarazione */
int somma( int v1, int v2) {
    /*       int v1;       int v2;     */
    int ris;

    /* codice */
    ris = v1 + v2;

    return ris;     /* restituisco il valore di ris */
}


int main()
{
    int v, a, b;
    a = 3; b = 4;

    /* invocazione */
    /* v = a + b; */
    v = somma(a, b);
    printf("La somma di a:%d + b:%d vale %d.\n", a, b, v);

    return 0;
}
