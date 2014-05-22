#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* AS 8.5.2014
   - Ricerca all'interno di una stringa
*/

#define MAXLINE 100



#define VERO    1
#define FALSO   0

/* ricerca */
/*
   tipo di dato: char
   input:
   vettore in cui cercare: etichetta_vettore e lunghezza_vettore
   valore da cercare: scalare
   output:
   flag: trovato o non_trovato
*/

/* output:
   posizione: -1 se non trovato
*/

/* input:
   contenitore per il numero di occorrenze del carattere
*/
int ricerca( char fz_line[], int fz_len, char fz_c,
             int *fz_occorrenze) {

    int fz_i;
    int fz_pos, fz_trovato;

    (*fz_occorrenze) = 0;

    /* ricerca */
    fz_pos = -1;   /* inizializzo la posizione ad un valore impossibile */
    fz_trovato = FALSO;

    /* Invece di MAXLINE dobbiamo usare la lunghezza
       della stringa */
    for(fz_i=0;fz_i<fz_len;fz_i++) {
        /* line[i] e' carattere corrente */
        if(fz_line[fz_i] == fz_c) {
            if(fz_trovato == FALSO)
                fz_pos = fz_i;    /* mi segno anche dove l'ho trovato */
            fz_trovato = VERO;
            /* break;  */ /* interrompiamo il ciclo */
            (*fz_occorrenze)++;
        }
    }

    /* return fz_trovato; */
    return fz_pos;

}

int main()
{
    char line[MAXLINE+1];   /* ricordiamo il /0 */
    char c;
    int trovato; int len; int pos;
    int i;
    int occorrenze;

    printf("Immetti linea: ");
    gets(line);         /* leggiamo la linea intera */

    printf("Immetti char da cercare: ");
    c = getchar();
    getchar();  /* butta via l'invio */

    printf("Cerco %c in '%s'.\n", c, line);
    len = strlen(line); /* calcola la lunghezza della str */

    /* line -> fz_line , len -> fz_len, c -> fz_c */
    pos = ricerca(line, len, c, &occorrenze);

    if(pos != -1) {   /* if(trovato==VERO) */
        printf("Carattere %c trovato, "
               "pos vale %d, "
               "occorrenze vale %d.\n" ,c ,pos, occorrenze);
    } else {
        printf("Carattere %c non trovato, pos vale %d.\n",c, pos);
    }

    return 0;
}

