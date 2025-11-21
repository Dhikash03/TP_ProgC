#include <stdio.h>

int main() {
    /* * Définition de la taille du triangle.
     * La consigne demande une valeur strictement inférieure à 10.
     * Vous pouvez changer cette valeur (ex: 5, 8, 9) pour tester.
     */
    int compteur = 5; 

    /* ==========================================
       VERSION 1 : Utilisation de boucles FOR
       ========================================== */
    printf("--- TRIANGLE AVEC BOUCLES FOR (Taille: %d) ---\n", compteur);

    /* Boucle externe : gère les lignes (de 1 à compteur) */
    for (int i = 1; i <= compteur; i++) {
        
        /* Boucle interne : gère les colonnes (de 1 à i) */
        for (int j = 1; j <= i; j++) {
            
            /* LOGIQUE D'AFFICHAGE DU MOTIF :
             * On affiche '*' si :
             * 1. C'est la première colonne (j == 1)
             * 2. C'est la dernière colonne de la ligne actuelle (j == i)
             * 3. C'est la toute dernière ligne du triangle (i == compteur)
             * Sinon, on affiche '#'
             */
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        /* Saut de ligne à la fin de chaque rangée */
        printf("\n");
    }

    printf("\n"); /* Séparation visuelle entre les deux versions */

    /* ==========================================
       VERSION 2 : Utilisation de boucles WHILE
       ========================================== */
    printf("--- TRIANGLE AVEC BOUCLES WHILE (Taille: %d) ---\n", compteur);

    int ligne = 1; /* Initialisation boucle externe */

    while (ligne <= compteur) {
        
        int col = 1; /* Initialisation boucle interne (remise à 1 à chaque ligne) */
        
        while (col <= ligne) {
            /* Même logique de condition que précédemment */
            if (col == 1 || col == ligne || ligne == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
            col++; /* Incrémenter la colonne */
        }
        
        printf("\n");
        ligne++; /* Incrémenter la ligne */
    }

    return 0;
}
