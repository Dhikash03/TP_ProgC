#include <stdio.h>

int main() {
    int somme = 0; /* Initialisation de la variable accumulateur */
    int dernier_nombre = 0; /* Variable optionnelle pour savoir où on s'est arrêté */

    printf("--- DEBUT DU CALCUL ---\n");

    /* Boucle de 1 à 1000 */
    for (int i = 1; i <= 1000; i++) {

        /* 1. Règle d'exclusion : Divisible par 11
         * Si le nombre est divisible par 11, on ignore le reste
         * des instructions et on passe à l'itération suivante.
         */
        if (i % 11 == 0) {
            continue;
        }

        /* 2. Règle d'ajout : Divisible par 5 OU 7 
         * L'opérateur '||' signifie OU logique.
         */
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i; /* Équivalent à : somme = somme + i; */
            dernier_nombre = i; /* Juste pour info (optionnel) */

            /* 3. Règle d'arrêt : Si la somme dépasse 5000 
             * On vérifie cela immédiatement après l'ajout.
             */
            if (somme > 5000) {
                break; /* Sortie immédiate de la boucle for */
            }
        }
    }

    printf("Calcul terminé.\n");
    printf("Le dernier nombre ajouté était : %d\n", dernier_nombre);
    printf("La somme finale est : %d\n", somme);

    return 0;
}
