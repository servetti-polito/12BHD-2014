#include <stdio.h>
#include <stdlib.h>

/*
   AS 28.04.2014
   - Funzione my_toupper => converte un carattere in maiuscolo
*/

char my_toupper( char c ) {
    /* char c; */
    char c_maiuscolo;

    /* NON FUNZIONA
       c = c - 32;
    */
    c_maiuscolo = c - 32;

    return c_maiuscolo;
}

/* se non restituisco valori uso void */
void wrong_toupper( char c) {
    c = c - 32;
}

void reference_toupper( char *c ) {
    /* puo' modificare direttamente
       il contenuto del contenitore (non e' una copia!) */
       (*c) = (*c) - 32;  /* modifica la variabile del main! */
    /* devo usare la variabile come *c */
}

int main()
{
    char carattere = 'a';
    printf("%c\n", my_toupper(carattere) );

    wrong_toupper(carattere);
    printf("carattere (by val): %c\n", carattere);

    /* & passa il RIFERIMENTO non il valore */
    reference_toupper(&carattere);
    printf("carattere (by_ref): %c\n", carattere);

    /* scanf("%d", &v); */

    return 0;
}
