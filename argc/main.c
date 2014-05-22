#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* AS 19.05.2014
   - Utilizzo linea di comando
   - Programma m2m -l|-u
     -l: converte in minuscolo
     -u: converte in maiuscolo
*/

#define TRUE    1
#define FALSE   0

int main(int argc, char *argv[])
{
    /* Devo testare che il programma sia chiamato
       con un argomento sulla linea di comando
       c:\m2m -l
          ^0  ^1  ==> argc == 2
    */
    int i;
    char c = ' ';
    int to_minuscolo;

    /* Controllare argc !!*/
    /* Per leggere la riga 1 di argv, devo controllare
       che 1<argc */
    printf("argc: %d\n", argc);
    /* stampo tutti gli argomenti della linea di comando */
    for(i=0;i<argc;i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    if(argc!=2) {
        /* Programma chiamato in modo errato */
        printf("Utilizzo: <nome_programma> -l|-u\n");
        system("PAUSE");
        exit(EXIT_FAILURE);
    }

    /* Discriminare se argv[1] e' "-l" o "-u" */
    if( strcmp(argv[1],"-l") == 0 ) {
        /* l'argomento e' "-l" */
        printf("Converto tutto in minuscolo.\n");
        to_minuscolo = TRUE;
    } else if( strcmp(argv[1],"-u") == 0 ) {
        /* l'argomento e' "-u" */
        printf("Converto tutto in MAIUSCOLO.\n");
        to_minuscolo = FALSE;
    } else {
        /* nessuno dei due */
        printf("Utilizzo: -l o -u\n");
        system("PAUSE");
        exit(EXIT_FAILURE);
    }

       while( c != EOF ){
            c = getchar();
            if(to_minuscolo) {
                c = tolower(c);
            } else {
                c = toupper(c);
            }
            putchar(c);
        }

    system("PAUSE");
    return 0;
}
