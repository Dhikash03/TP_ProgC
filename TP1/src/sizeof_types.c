#include <stdio.h>

int main() {
    /* 1. Types caractères (char) */
    printf("--- CHAR ---\n");
    printf("Size of char               : %zu octet(s)\n", sizeof(char));
    printf("Size of signed char        : %zu octet(s)\n", sizeof(signed char));
    printf("Size of unsigned char      : %zu octet(s)\n", sizeof(unsigned char));
    printf("\n");

    /* 2. Types entiers courts (short) */
    printf("--- SHORT ---\n");
    printf("Size of short              : %zu octet(s)\n", sizeof(short));
    printf("Size of signed short       : %zu octet(s)\n", sizeof(signed short));
    printf("Size of unsigned short     : %zu octet(s)\n", sizeof(unsigned short));
    printf("\n");

    /* 3. Types entiers standards (int) */
    printf("--- INT ---\n");
    printf("Size of int                : %zu octet(s)\n", sizeof(int));
    printf("Size of signed int         : %zu octet(s)\n", sizeof(signed int));
    printf("Size of unsigned int       : %zu octet(s)\n", sizeof(unsigned int));
    printf("\n");

    /* 4. Types entiers longs (long int) */
    printf("--- LONG INT ---\n");
    printf("Size of long int           : %zu octet(s)\n", sizeof(long int));
    printf("Size of signed long int    : %zu octet(s)\n", sizeof(signed long int));
    printf("Size of unsigned long int  : %zu octet(s)\n", sizeof(unsigned long int));
    printf("\n");

    /* 5. Types entiers très longs (long long int) */
    printf("--- LONG LONG INT ---\n");
    printf("Size of long long int      : %zu octet(s)\n", sizeof(long long int));
    printf("Size of signed long long   : %zu octet(s)\n", sizeof(signed long long int));
    printf("Size of unsigned long long : %zu octet(s)\n", sizeof(unsigned long long int));
    printf("\n");

    /* 6, 7, 8. Types à virgule flottante (float, double, long double) */
    /* Note : Pas de signed/unsigned pour ces types */
    printf("--- FLOTTANTS ---\n");
    printf("Size of float              : %zu octet(s)\n", sizeof(float));
    printf("Size of double             : %zu octet(s)\n", sizeof(double));
    printf("Size of long double        : %zu octet(s)\n", sizeof(long double));

    return 0;
}
