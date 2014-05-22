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

    /* stampo argv */
    for(r=0; r<argc; r++) {
        printf("%d: %s\n", r, argv[r]);
    }

    system("pause");
    return 0;
}
