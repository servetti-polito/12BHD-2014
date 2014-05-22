#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* AS 5.5.2014
   - Stringhe e scanf/printf
*/

int mystrlen(char v[]) {
    int i = 0;
    while(v[i] != '\0') {
        i++;
    }
    return i;
}

int main()
{
    /* dichiarazione di una stringa di 9 caratteri + '\0' */
    char stringa2[9+1], stringa2[100];

    int len;

    /* Non serve & */
    scanf("%s", stringa);

    len = mystrlen(stringa);

/*    stringa[1] = '\0'; */
    printf("%d: %s\n", len, stringa);

    /* leggiamo stringa2 */
    scanf("%s", stringa2);
    /* concateniamo stringa e stringa2 */
    strcat(stringa, stringa2);
    printf("%d: %s\n", strlen(stringa), stringa);

    /* utilizzo di strchr */
    if(strchr(stringa, 'c') != NULL) {
        printf("trovato!\n");
    }

    return 0;
}
