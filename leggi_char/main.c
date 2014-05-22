#include <stdio.h>
#include <stdlib.h>

/* AS 2014.05.02
   - legge caratteri fino all' acapo
*/

int main()
{
    char c;

    printf("START\n");

    do {
        /*scanf("%c", &c);*/
        /* restituisce il codice del carattere letto da tastiera */
        c = getchar();
        /* printf("(%c)", c); */
        putchar('(');
        putchar(c);
        putchar(')');
    }while(c!=EOF);

    printf("THE END\n");


    return 0;
}
