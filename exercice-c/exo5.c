//
//  exo5.c
//  exercice-c
//
//  Created by Adrien Boiseau on 06/10/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "exo5.h"
#include <stdio.h>

int exo (void) {
    float val;
    float valdebut;
    float valfin;
    int rang=0;
    printf("Val_Début = ?\n");
    scanf("%f",&valdebut);
    printf("Val_Fin = ?\n");
    scanf("%f",&valfin);

    if (valdebut<valfin) {
    
    do {
        printf("Entrez une valeur : ?\n");
        scanf("%f",&val);
        rang++;
    }
    while (val<=valdebut || val>=valfin);
    printf("La valeur d'arrêt est au rang : %d\n",rang);
    printf("La valeur d'arrêt est : %.2f\n",val);
    }
    else {
        printf("Erreur votre valeur de début doit être inférieur à celle de fin\n");
    }
    return 0;
    
}
