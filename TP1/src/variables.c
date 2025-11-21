#include <stdio.h>

int main() {
    /* --- 1. CHAR (Caractères) --- */
    /* char : souvent utilisé pour le texte */
    char c = 'Z'; 
    /* signed char : petite valeur numérique signée (-128 à 127) */
    signed char sc = -120;
    /* unsigned char : petite valeur positive (0 à 255) */
    unsigned char uc = 250;

    printf("=== CHAR ===\n");
    printf("Valeur de char           : %c\n", c);
    printf("Valeur de signed char    : %d\n", sc);
    printf("Valeur de unsigned char  : %u\n", uc);
    printf("\n");


    /* --- 2. SHORT (Entiers courts) --- */
    short s = -32000;
    unsigned short us = 65000;

    printf("=== SHORT ===\n");
    printf("Valeur de short          : %hd\n", s);
    printf("Valeur de unsigned short : %hu\n", us);
    printf("\n");


    /* --- 3. INT (Entiers standards) --- */
    int i = -150000;
    unsigned int ui = 4000000000U; /* U suffixe pour unsigned constante */

    printf("=== INT ===\n");
    printf("Valeur de int            : %d\n", i);
    printf("Valeur de unsigned int   : %u\n", ui);
    printf("\n");


    /* --- 4. LONG INT (Entiers longs) --- */
    long int li = -2000000000L;
    unsigned long int uli = 4000000000UL; 

    printf("=== LONG INT ===\n");
    printf("Valeur de long           : %ld\n", li);
    printf("Valeur de unsigned long  : %lu\n", uli);
    printf("\n");


    /* --- 5. LONG LONG INT (Entiers très longs) --- */
    long long int lli = -9000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL;

    printf("=== LONG LONG INT ===\n");
    printf("Valeur de long long      : %lld\n", lli);
    printf("Valeur de u. long long   : %llu\n", ulli);
    printf("\n");


    /* --- 6, 7, 8. FLOTTANTS (Nombres à virgule) --- */
    /* Note : Pas de signed/unsigned ici */
    float f = 3.14159f;
    double d = 12345.6789;
    long double ld = 987654321.123456789L;

    printf("=== FLOTTANTS ===\n");
    printf("Valeur de float          : %f\n", f);
    printf("Valeur de double         : %lf\n", d);
    /* %Lf est crucial pour le long double */
    printf("Valeur de long double    : %Lf\n", ld); 

    return 0;
}
