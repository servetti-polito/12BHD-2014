#include <stdio.h>
#include <stdlib.h>

/* AS 15.5.2014
   - Listino: vettore di stringhe === matrice di caratteri
*/

#define N   10
#define M   100

void stampa(char fz_m[][M+1], int fz_cnt) {
    int r;
    /* stampo ogni riga */
    /* posso aver inserito meno di N righe */
    for(r=0; r<fz_cnt; r++) {
        /* riga si chiama m[r] */
        puts(fz_m[r]);
    }
}

main()
{
    /* 10 righe
       ogni riga M caratteri + il /0 */
    char m[N][M+1];
    int r;

    char *check;
    int cnt;

    /* ciclo misto
       - ripeti fino a che
         - hai ciclato N volte
         - non dico basta ^Z
    */

#if 0
    r = 0;
    check = gets(m[r]);
    while( r<N && check != NULL) {

        r++;
        check = gets(m[r]);
    }

    r = 0;
    while( r<N && gets(m[r])!=NULL ) {

        r++;
    }
#endif

    cnt = 0;
    /* per N volte */
    for(r=0; r<N; r++) {
        /* leggo una stringa nella riga r della matrice */
        check = gets(m[r]);
        /* se mi dici ^Z */
        if(check == NULL) {
            /* smetto */
            printf("break\n");
            break;
        }
        cnt++;
        printf("[%d]\n", cnt);
        /* altrimenti stampo */
        printf("%d: %s\n", r, m[r]);
        /* continuo con il prossimo giro */
    }
    /* cnt rappresenta il numero di righe scritte */


    stampa(m, cnt);

#if 0
    for(r=0; r<N; r++) {
        /* scrivo dentro una riga */
        /* riga si chiama m[r] */
        gets(m[r]);
    }
#endif


    return 0;
}
