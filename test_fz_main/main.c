#include <stdio.h>
#include <stdlib.h>

/*...*/
int main(/*...*/
         int argc,
         char *argv[]   /* argv matrice di caratteri argv[N][M] */
         )
{
    /* argv[][]
         0: "       "
         1: "       "
         2: "       "
         ...
    argc-1: "       "
    */
    int r;
    int v;
    int somma;

    /* stampo argv */
    for(r=0; r<argc; r++) {
        printf("%d: %s\n", r, argv[r]);
    }

    somma = 0;
    for(r=1; r<argc; r++) {
	/* per ogni riga converto in un numero */
	v = atoi(argv[r]);
        somma += v;
    }
    printf("La somma e': %d\n", somma);

    return 0;
}
