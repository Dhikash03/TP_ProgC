#include <stdio.h>

int main() {
    /* --- VARIABLES À MODIFIER POUR TESTER --- */
    int num1 = 10;
    int num2 = 0;   /* Essayez 0 pour tester la sécurité de la division */
    char op = '/';  /* Changez ce caractère parmi : +, -, *, /, %, &, |, ~ */

    printf("--- CALCULATRICE SWITCH ---\n");
    printf("Nombre 1 : %d\n", num1);
    printf("Nombre 2 : %d\n", num2);
    printf("Opérateur: %c\n\n", op);
    printf("Résultat : ");

    /* Structure de contrôle switch */
    switch (op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            /* Sécurité : Division par zéro */
            if (num2 == 0) {
                printf("Erreur : Division par zéro impossible !\n");
            } else {
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            }
            break;

        case '%':
            /* Sécurité : Modulo par zéro */
            if (num2 == 0) {
                printf("Erreur : Modulo par zéro impossible !\n");
            } else {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            }
            break;

        case '&':
            /* Opérateur Bitwise AND (ET binaire) */
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;

        case '|':
            /* Opérateur Bitwise OR (OU binaire) */
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;

        case '~':
            /* Opérateur Bitwise NOT (NON binaire)
             * Attention : C'est un opérateur unaire (ne prend qu'un seul nombre).
             * Il inverse les bits de num1.
             * Avec num2, l'opération n'a pas de sens technique ici, on l'ignore.
             */
            printf("~%d = %d\n", num1, ~num1);
            break;

        default:
            /* Si l'utilisateur entre un caractère non prévu */
            printf("Erreur : Opérateur '%c' non reconnu.\n", op);
            break;
    }

    return 0;
}

