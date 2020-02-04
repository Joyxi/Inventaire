#include <stdio.h>
#include <string.h>
#include <stdlib.h>




struct Objet{
	float prix;
	char nom[20];
	
};

typedef struct Objet objet;

int main(){
	
	int choix;
	printf("Voulez vous ouvrir votre inventaire ? 1 pour oui, 2 pour non \n");
	scanf("%d",&choix);
	if (choix==1){
		objet tTabInv[3] = {{20, "Orelsan"}, {15, "PNL"}, {25, "Bbnos"}};

			tTabInv[0].nom
		struct Objet cd= { 20,"orelsan"};
		
		printf("Le cd de %s vaut %f $", cd.nom, cd.prix);
		return 0;
	}
}