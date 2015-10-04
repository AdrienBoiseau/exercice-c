//
//  bonjour.c
//  exercice-c
//
//  Created by Adrien Boiseau on 04/10/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "bonjour.h"
#include <stdio.h>


int bonjour (void) {
    int etudiante;
    while (etudiante!=1 && etudiante!=2) {
        printf("Tapez 1 si étudiante, 2 si étudiant\n");
        scanf ("%d",&etudiante);
        
    }
    if (etudiante==1){
        printf("Bonjour Mademoiselle\n");
    }
    else {
        printf("Bonjour Monsieur\n");
    }
    
    return 0;
}