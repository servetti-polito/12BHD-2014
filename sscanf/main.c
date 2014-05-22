#include <stdio.h>
#include <stdlib.h>

/* AS 5.5.2014
    - uso sscanf per interpretare una stringa
*/

int main()
{
    char line[100];
    int h, m;

    gets(line);
    sscanf(line, "%d:%d", &h, &m);
    puts(line);

    printf("Sono le %d e %d\n", h, m);

    return 0;
}
