#include <stdio.h>
#include <stdlib.h>

/* usiamo la #define per definire delle costanti */
#define  PIGRECO  3.14159265358
#define  N    12

int main()
{
    int x;
    float f;

    int hh, mm;

    /* e' una variabile (contenitore) definita come costante
       non puo' essere piu' modificata */
    const float PI = 3.14159265258;


    printf("Immetti un numero intero e un float: ");
    scanf("%i-%f", &x, &f);

    printf("Hai inserito: %d %f\n", x, f);

    printf("Immetti l'ora nel formato hh:mm ");
    scanf("%d:%d", &hh, &mm);
    printf("Hai inserito ora: %d, minuti: %d\n", hh, mm);

    system("PAUSE");

    return 0;
}
