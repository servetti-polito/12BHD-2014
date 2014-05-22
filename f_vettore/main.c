#include <stdio.h>
#include <stdlib.h>

#define N 3

int somma(int v[], int len) {
      /* con le [] ma senza la dimensione dentro */
      /* uso il vettore normalmente */
      int i;
      int s = 0;
      for(i=0; i<len; i++) {
        s += v[i];
        /* v[i] = 2*v[i]; */
      }
      return s;
}

int main()
{
    int vett[N] = { 1, 2, 3 };
    int s;
    int l = N;

    /*        etichetta, variabile lunghezza */
    s = somma(vett,      l);    /* senza le [],
                           ma aggiungendo una variabile per la
                           lunghezza */

    return 0;
}
