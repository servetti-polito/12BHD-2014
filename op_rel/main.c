#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 3;
    int val;

    val = (a > b);

    printf("a:%d b:%d -> val:%d\n", a, b, val);

    a = 1;
    val = (a > b);
    printf("a:%d b:%d -> val:%d\n", a, b, val);

    val = 0;

    if(val) {
        printf("val: %d e' vero\n", val);
    } else {
        printf("val: %d e' falso\n", val);
    }

    return 0;
}
