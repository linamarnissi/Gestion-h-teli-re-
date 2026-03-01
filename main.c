#include <stdio.h>

int main() {
    int choix;

    do {
        printf("\n===== Gestion Hoteliere =====\n");
        printf("1. Ajouter client\n");
        printf("2. Ajouter chambre\n");
        printf("3. Faire reservation\n");
        printf("4. Faire paiement\n");
        printf("5. Afficher donnees\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch(choix) {
            case 1:
                printf("Ajout client...\n");
                break;
            case 2:
                printf("Ajout chambre...\n");
                break;
            case 3:
                printf("Reservation...\n");
                break;
            case 4:
                printf("Paiement...\n");
                break;
            case 5:
                printf("Affichage...\n");
                break;
            case 0:
                printf("Au revoir \n");
                break;
            default:
                printf("Choix invalide !\n");
        }

    } while(choix != 0);

    return 0;
}
