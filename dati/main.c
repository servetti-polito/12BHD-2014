#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* start */
    /* inizio dichiarazioni variabili */
    int val1;   /* dichiarazione di variabile intera con etichetta val1 */
                /* val1 contiene un valore non noto */
    int val2;
    int val3;

    /* variabile di tipo reale */
    float r_val1;

    float v_float_var = 123456789.0;
    double v_double_var = 123456789.0;
    unsigned int g_uint_var = -5; /* !!! sbagliato */

    printf("True value is 123456789.0\n");
    printf("float precision: %f\n", v_float_var);
    printf("double precision: %f\n", v_double_var);


    /* inizio istruzioni */
    val1 = 5;
    val2 = val1;
    val3 = val1 + val2; /* espressioni +, -, /, *, % */
    /* 7 / 2 => 3.5 (reale) */
    /* 7 / 2 => 3  => resto 7 - (3*2) = 1 */

    val1 = 2.5;
    /*
    reale => intero
    */
    val3 = 7 / 2;

    // pippo

    r_val1 = 2.5;
    r_val1 = 0.1;


    /* stop */
    return 0;
}
