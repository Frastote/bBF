#include "army.h"

void addUnit(Unit unit, Army army){
	army.units[army.limit] = unit;
}

int rand_a_b(int a, int b){
    return rand()%(b-a) +a;
}

void selectUnit(Army army){
	int i;
	Unit newUnit;
	char line[MAX_LENGTH] = "";
	numberUnit = rand_a_b(0,NB_MAX_UNITS);
	file = fopen("units.txt","r");
	if (fichier!=NULL){
		while ((fgets(chaine, MAX_LENGTH, file) != NULL) && (i!=numberUnit)){
			i++;
		}
		newUnit.name =
	}
}
