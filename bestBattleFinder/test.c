
#include "functions.c"

int parseUnite(char *infosUnite);

int main(int argc, char *argv[]){
    int i;
    char *unites[50]; // Tableau dynamique de string de longueur 50
    lireFichier("units.txt", unites);

    for(i = 0; i <= 1; i++){
        parseUnite(unites[i]);
        printf("\n---\n");
    }

    return 0;
}


int parseUnite(char *infosUnite){
    char **resultats;
    printf("%s", infosUnite); // On affiche la chaîne
    // explode(infosUnite, ';', resultats);
}
