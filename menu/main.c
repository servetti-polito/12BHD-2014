#include <stdio.h>
#include <stdlib.h>

/* AS 15.5.2014 */
/* Menu del ristorante */

#define FALSO 0
#define VERO  1

int main()
{
    int scelta;
    int finito = FALSO;

    do {
        printf("1: Spaghetti mari e monti\n");
        printf("2: Salmone affumicato\n");
        printf("3: Carpaccio di manzo affumicato\n");
        printf("4: Meringata\n");
        printf("5: Caffe'\n");
        printf("0: Fine\n");

        printf("Cosa desidera? ");
        scanf("%d", &scelta);

        switch(scelta) {

        case 2:
            printf("Ecco il: salmone affumicato.\n");
            break;

        case 3:
            printf("Ecco il: carpaccio di manzo affumicato.\n");
            break;

        case 0:
            finito = VERO;
            break;

        default:
            printf("Scelta errata, riprova.\n");

        }
    }while(!finito);

    return 0;
}
