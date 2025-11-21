#include <stdio.h>
#include <stdbool.h> /* Nécessaire pour utiliser le type 'bool', 'true', 'false' */

int main() {
    /* Déclaration et initialisation des variables */
    int a = 16;
    int b = 3;

    printf("--- VALEURS INITIALES ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("\n");

    /* --- OPÉRATEURS ARITHMÉTIQUES --- */
    printf("--- ARITHMETIQUE ---\n");

    /* 1. Addition */
    int addition = a + b;
    printf("Addition (a + b)       : %d\n", addition);

    /* 2. Soustraction */
    int soustraction = a - b;
    printf("Soustraction (a - b)   : %d\n", soustraction);

    /* 3. Multiplication */
    int multiplication = a * b;
    printf("Multiplication (a * b) : %d\n", multiplication);

    /* 4. Division */
    /* Attention : Comme a et b sont des entiers, c'est une division entière (pas de virgule) */
    int division = a / b;
    printf("Division (a / b)       : %d\n", division);

    /* 5. Modulo (Reste de la division) */
    int modulo = a % b;
    printf("Modulo (a %% b)         : %d\n", modulo);
    printf("\n");

    /* --- OPÉRATEURS LOGIQUES ET DE COMPARAISON --- */
    /* En C, une comparaison renvoie 1 si c'est Vrai (true), et 0 si c'est Faux (false) */
    
    printf("--- LOGIQUE / COMPARAISON ---\n");

    /* 6. Égalité (==) */
    bool estEgal = (a == b);
    /* Astuce d'affichage : on utilise une condition ternaire pour afficher "true" ou "false" */
    printf("a est égal à b (a == b)      : %s (valeur interne: %d)\n", 
           estEgal ? "true" : "false", estEgal);

    /* 7. Supériorité (>) */
    bool estSuperieur = (a > b);
    printf("a est supérieur à b (a > b)  : %s (valeur interne: %d)\n", 
           estSuperieur ? "true" : "false", estSuperieur);

    return 0;
}
