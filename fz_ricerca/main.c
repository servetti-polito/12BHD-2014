#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* AS 8.5.2014
   - Ricerca all'interno di una stringa
*/

#define MAXLINE 100



#define VERO    1
#define FALSO   0

int main()
{
    char line[MAXLINE+1];   /* ricordiamo il /0 */
    char c;
    int trovato; int len; int pos;
    int i;

    printf("Immetti linea: ");
    gets(line);         /* leggiamo la linea intera */

    printf("Immetti char da cercare: ");
    c = getchar();
    getchar();  /* butta via l'invio */

    printf("Cerco %c in '%s'.\n", c, line);

    /* ricerca */
    pos = -1;   /* inizializzo la posizione ad un valore impossibile */
    trovato = FALSO;
    /* Invece di MAXLINE dobbiamo usare la lunghezza
       della stringa */
    len = strlen(line); /* calcola la lunghezza della str */
    for(i=0;i<len;i++) {
        /* line[i] e' carattere corrente */
        if(line[i] == c) {
            trovato = VERO;
            pos = i;    /* mi segno anche dove l'ho trovato */
            break;  /* interrompiamo il ciclo */
        }
    }
    /* controllo */
    if(trovato) {   /* if(trovato==VERO) */
        printf("Carattere %c trovato in posizione %d.\n",
               c, pos);
    } else {
        printf("Carattere %c non trovato.");
    }

    return 0;
}


#if 0
    char c1, c2, c3;
    char nul;

    scanf("%c", &c1);   /* 'a' '\n' */
    /* leggi il \n in una variabile che non mi serve */
    scanf("%c", &nul);  /* <--- '\n' */

    /* leggi un carattere in c2
       e un secondo carattere che butti via %*c */
    scanf("%c%*c", &c2);   /* 'a' '\n' */

    scanf("%c", &c3);

    printf("(%c) (%c) (%c)\n", c1, c2, c3);
#endif
