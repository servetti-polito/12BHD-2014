#include <stdio.h>
#include <stdlib.h>

/* AS 8.5.2014
   - matrici
*/

int main()
{
    int m[3]     [5] = {
                       /* 0 */ { 1,   2,  3,  4,  5 },
                       /* 1 */ { 11, 12, 13, 14, 15 },
                       /* 2 */ { 21, 22, 23, 24, 25 },
                       };
    /*    ^righe  ^colonne */
    /*    0 1 2 3 4
       0 [][][][][]
       1 [][][][][]
       2 [][][][][]
    */

    int i,j;

    for(i=0; i<5; i++) {
        /* scorro la riga 1 */
        printf("%d ", m[1][i]); /* m[1][0], m[1][1], ..., m[1][4] */
    }
    printf("\n");
        printf("\n");

    /* la matrice viene letta per righe */
    for(j=0; j<3; j++) {
        /* j=0, j=1, j=2 */
        for(i=0; i<5; i++) {
            /* scorro le colonne della riga j-esima */
            /* scorro la riga 1 */
            printf("%d ", m[j][i]); /* m[1][0], m[1][1], ..., m[1][4] */
        }
        printf("\n");
    }
        printf("\n");

    for(i=0; i<5; i++) {
        /* i=0, i=1, ..., i=4 */
        for(j=0; j<3; j++) {
            /* m[][0] -> m[0][0], m[1][0], m[2][0] */
            printf("%d ", m[j][i]); /* m[1][0], m[1][1], ..., m[1][4] */
        }
        printf("\n");
    }
        printf("\n");


    return 0;
}
