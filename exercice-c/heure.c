//
//  heure.c
//  exercice-c
//
//  Created by Adrien Boiseau on 04/10/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "heure.h"
#include <stdio.h>


int heure (void) {
    
    float heure;
    printf("heure départ : ?\n");
    scanf("%f",&heure);
    float minute;
    printf("minute départ : ?\n");
    scanf("%f",&minute);
    float seconde;
    printf("seconde départ : ?\n");
    scanf("%f",&seconde);
    
    float heure2;
    printf("heure arrivé : ?\n");
    scanf("%f",&heure2);
    float minute2;
    printf("minute arrivé : ?\n");
    scanf("%f",&minute2);
    float seconde2;
    printf("seconde arrivé : ?\n");
    scanf("%f",&seconde2);
    
    float secondefinal;
    secondefinal=0;
    
    
    
    if (heure>=heure2) {
        printf ("Votre heure de départ doit être inférieur à l'heure d'arrivé\n");
    }
    else {
        secondefinal=((heure2-heure)*3600)+((minute2-minute)*60)+(seconde2-seconde);
        printf("Vous avez : %.2f seconde de trajet\n",secondefinal);
    }
    
    return 0;
}
