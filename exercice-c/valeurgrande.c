//
//  valeurgrande.c
//  exercice-c
//
//  Created by Adrien Boiseau on 06/10/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "valeurgrande.h"
#include <stdio.h>

int valeur (main) {
    //Début du programme
    float nbvaleur;
    nbvaleur=0;
    float valeur;
    int i;
    i=0;
    float grand;
    grand=0;
    int ranggrand;
    ranggrand=0;
    
    printf("Veuillez entrez votre nombre de valeurs que vous souhaitez : ?\n");
    scanf("%f",&nbvaleur);
    
    
    //Début de la boucle for
    for (i=0; i<=nbvaleur; i++) {
        printf("Veuillez entrez vos valeur : ?\n");
        scanf("%f",&valeur);
        if (i==1) {
            grand=valeur;
            ranggrand=i;
        }
        else if (valeur>grand) {
            grand=valeur;
            ranggrand=i;
        }
    }
    
    printf("La valeur la plus grande est : %.2f\n", grand);
    
   //Fin du programme
return 0;
}