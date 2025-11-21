#include <stdio.h>

int main() {
    /* --- Déclaration et Initialisation --- */
    int n = 5;      /* Hauteur de la pyramide */
    int i, j;       /* Variables pour les boucles */

    printf("--- PYRAMIDE DE NOMBRES (Hauteur: %d) ---\n\n", n);

    /* --- Boucle principale (Gère les lignes / hauteur) --- */
    /* On va de la ligne 1 jusqu'à la ligne n */
    for (i = 1; i <= n; i++) {

        /* 1. Boucle pour les ESPACES */
        /* Plus on descend (i augmente), moins il y a d'espaces (n - i) */
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        /* 2. Boucle pour la partie CROISSANTE (ex: 1, 12, 123) */
        /* Affiche les nombres de 1 jusqu'à i */
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        /* 3. Boucle pour la partie DECROISSANTE (ex: rien, 1, 21) */
        /* Affiche les nombres de i-1 jusqu'à 1.
         * Note : Si i=1, cette boucle ne s'exécute pas (car 0 < 1),
         * ce qui est correct car le sommet est juste "1".
         */
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        /* Passage à la ligne suivante après avoir fini la rangée */
        printf("\n");
    }

    /* --- Terminaison --- */
    printf("\nGénération de la pyramide terminée.\n");

    return 0;
}
