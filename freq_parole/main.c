#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* AS 21.05.2014 */
/* Calcola la frequenza con cui compaiono le parole in un testo */

#define N   100
#define M   80

#define FALSO   0
#define VERO    1

int ricerca( char fz_nome[N][M+1], int fz_cnt,
             char fz_parola[]  /* parola da cercare */
           ) {

    int fz_i;
    int fz_pos, fz_trovato;

    /* ricerca */
    fz_pos = -1;   /* inizializzo la posizione ad un valore impossibile */
    fz_trovato = FALSO;

    /* Invece di MAXLINE dobbiamo usare la lunghezza
       della stringa */
    for(fz_i=0;fz_i<fz_cnt;fz_i++) {
        /* line[i] e' carattere corrente */
        if(strcmp(fz_nome[fz_i],fz_parola)==0) {
            if(fz_trovato == FALSO)
                fz_pos = fz_i;    /* mi segno anche dove l'ho trovato */
            fz_trovato = VERO;
            /* break;  */ /* interrompiamo il ciclo */
        }
    }

    /* return fz_trovato; */
    return fz_pos;

}

/* stampa le parole nel vettore nome */
int stampa(char fz_nome[N][M+1], int fz_val[], int fz_cnt) {

    int fz_i;
    for(fz_i=0; fz_i<fz_cnt; fz_i++) {
        printf("    [%d] %d: %s\n", fz_i, fz_val[fz_i], fz_nome[fz_i]);
    }


}


int main()
{
    /* matrice di caratteri -> vettore di stringhe */
    char nome[N][M+1];
    int  val[N];        /* contatore delle frequenze
                       per ciascuna parola trovata */
    char parola[M+1];
    int  cnt;
    int  i;
    int  pos;

    /* inizializziamo le frequenze a 0 */
    for(i=0;i<N;i++) { val[i] = 0; }

    cnt = 0;
    /* leggo il testo con %s */
    while( scanf("%s", parola) == 1 && cnt<N ) {
        printf("[%d] parola: %s\n", cnt, parola);

        stampa(nome,val,cnt);

        /* ricerca ritorna un intero
           che viene assegnato a pos,
           e' poi pos che viene valutato >= 0 */
        if( (pos = ricerca(nome, cnt, parola)) >= 0) {
            printf("  Parola doppione in posizione %d.\n", pos);
            val[pos] += 1;
        } else {
            printf("  Parola nuova: la memorizzo.\n");
            strcpy(nome[cnt], parola);
            val[cnt] = 1;
            cnt++;
        }

        /* if(cnt==N) { printf("pieno.\n"); break; } */
    }
    if(cnt == N) {
        printf("Vettore di stringhe pieno.\n");
    }

    stampa(nome,val,cnt);

    /* ristampo (al contrario) */
    for(i=cnt-1; i>=0; i--) {
        printf("%s ", nome[i]);
    }

    return 0;
}
