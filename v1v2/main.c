#include <stdio.h>
#include <stdlib.h>

/* AS 16.4.2014
*/

#define N   10

int main()
{
    int v1[N], v2[N];
    int i1,    i2;
    int val;

    /*
        i1 = 0
        |
        0
    v1 | | | | | | | ... |

    v1[i1] = 4; i1++;

          i1 = 1
          |
    v1 |4| | | | | | ... |


            i1 = 2
            |
        0 1 2
    v1 |4|3| | | | | ... |
    */

    i1 = 0; i2 = 0;
    while(i1<N && i2<N) {
        scanf("%d", &val);
        if(val>0 || (val<0 && val%3==0) ) {
            /* metto il numero in v1 */
            v1[i1] = val; i1++;
        }
        if( (val<0 && val%3!=0 && val%2!=0 ) {
            /* metto il numero in v2 */
            v2[i2] = val; i2++;
        }
    }


    return 0;
}
