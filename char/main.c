#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* AS 2014.04.17
   - Char
*/

int main()
{
    char c;
    int  v;

    c = 'A';    /* apici per specificare QUEL carattere */
    printf("%d\n", c);    /* leggi c come un intero */
    printf("%c\n", c);    /* leggi c come un carattere */

    scanf("%c", &c);    /* %c per convertire il carattere */
    printf("%c\n", c);    /* leggi c come un carattere */
    printf("%d\n", c);    /* leggi c come un intero */

    v = c;
    printf("%c\n", v);    /* leggi v come un carattere */
    printf("%d\n", v);    /* leggi v come un intero */

/*    if( isupper(c) ) { */
    if(c >= 'A' && c<= 'Z') {
            /* A B C D ... Z sono in fila da
              65         a 90                */
        printf("c:%c e' una lettera maiuscola.\n");
    } else {
        printf("c:%c NON è una lettera maiuscola.\n");
    }

    if(isdigit(c)) {
        printf("c:%c e' una cifra.\n", c);
    }
    return 0;
}
