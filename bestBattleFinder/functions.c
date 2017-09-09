#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_LIGNE_FICHIER 1000

/**
 * Permet de lire un fichier dont le nom est passé en paramètre et stocke chaque ligne dans un tableau de string
 *
 * @param char*   nomFichier  Nom du fichier devant être lu
 * @param char**  lignes      Tableau de string contenant les résultats lu
 *
 * @return int    1 si le fichier a pu être lu, 0 sinon
 */
int lireFichier(char *nomFichier, char **lignes){
    FILE* fichier = NULL;
    char chaine[TAILLE_MAX_LIGNE_FICHIER] = "";
    int n = 0;

    fichier = fopen(nomFichier, "r+");

    // On essai d'ouvrire le fichier
    if (fichier != NULL){
        while(fgets(chaine, TAILLE_MAX_LIGNE_FICHIER, fichier) != NULL){
            lignes[n] = malloc(strlen(chaine)+1);
            strcpy(lignes[n], chaine);
            n++;
        }
        fclose(fichier);
        return 1;
    }
    else{
        printf("Impossible d'ouvrir le fichier %s", nomFichier);
        return 0;
    }
}


/**
 * Permet d'exploser une chaine de caractère selon un délimiteur
 *
 * @param char*     chaine      Chaine à exploser
 * @param char      delimiteur  Délimiteur servant à exploser la chaine
 * @param char**    resultats   Tableau de string contenant la chaine en morceau
 */
void explode(char *chaine, char delimiteur, char **resultats){
    int n = 0;
    int m = 0;
    int i;

    printf("Chaine : %s", chaine);
    printf("Delimiteur : %c\n", delimiteur);

    for(i = 0; i < strlen(chaine); i++){
        printf("%d: %c - %c\n", i, chaine[i], delimiteur);
        if(chaine[i] != delimiteur){
            resultats[n][m] = chaine[i]; // ça plante à cette ligne, probablement l'affectation qui foire
            m++;
        }
        else{
            resultats[n][m] = '\0';
            printf("%s", resultats[n]);
            n++;
            m = 0;
        }
    }
}
