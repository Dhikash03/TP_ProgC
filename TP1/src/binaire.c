#include <stdio.h>

int main() {
    /* Tableau contenant les nombres demandés pour le test */
    int valeurs[] = {0, 4096, 65536, 65535, 1024};
    
    /* Calcul du nombre d'éléments dans le tableau pour la boucle */
    int nombre_de_tests = 5;

    printf("--- CONVERTISSEUR DECIMAL VERS BINAIRE ---\n");

    /* Boucle principale pour parcourir chaque nombre du tableau */
    for (int k = 0; k < nombre_de_tests; k++) {
        int nombre = valeurs[k];
        
        printf("Decimal : %-8d | Binaire : ", nombre);

        /* * BOUCLE DE CONVERSION
         * Un entier standard (int) fait généralement 32 bits.
         * Nous allons lire les bits de gauche à droite (du 31ème au 0ème).
         */
        for (int i = 31; i >= 0; i--) {
            
            /* * EXPLICATION TECHNIQUE :
             * 1. (nombre >> i) : On décale les bits du nombre vers la droite de 'i' positions.
             * Cela amène le bit qui nous intéresse en position 0 (tout à droite).
             * C'est l'équivalent binaire de la division par 2 puissance i.
             *
             * 2. & 1 : On effectue un ET logique avec 1.
             * Cela isole le dernier bit. Si c'est 1, le résultat est 1. Sinon 0.
             * C'est l'équivalent de l'opérateur modulo % 2.
             */
            int bit = (nombre >> i) & 1;

            printf("%d", bit);

            /* Esthétique : Ajout d'un espace tous les 4 bits pour la lisibilité */
            if (i % 4 == 0 && i != 0) {
                printf(" ");
            }
        }
        
        printf("\n"); /* Saut de ligne après chaque nombre */
    }

    return 0;
}
