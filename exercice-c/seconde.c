//
//  seconde.c
//  exercice-c
//
//  Created by Adrien Boiseau on 04/10/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "seconde.h"
#include <stdio.h>

int seconde (void) {
    float heure;
    printf ("Veuillez saisir une heure : ?\n");
    scanf ("%f", &heure);
    float minute;
    printf ("Veuillez saisir un nombre de minute : ?\n");
    scanf ("%f", &minute);
    float seconde;
    printf ("Veuillez saisir un nombre de seconde : ?\n");
    scanf ("%f", &seconde);
    
    float secondefinal;
    
    secondefinal = (heure*3600)+(minute*60)+(seconde);
    printf("Le nombre de seconde est : %.2f\n",secondefinal);
    
    return 0;
}

