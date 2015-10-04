//
//  parc.c
//  main2.c
//
//  Created by Adrien Boiseau on 26/09/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "parc.h"
#include <stdio.h>

int parc(void) {
    
    int age;
    printf("Veuillez entrer votre âge : ?\n");
    scanf("%d",&age);
    
    int heure;
    printf("Veuillez entrer l'heure : ?\n");
    scanf("%d",&heure);
    
    float prix;
    prix=6;
    if (age<5) {
        printf ("Vous avez moins de 5 ans, le parc est gratuit\n");
        
    }
    else if (age>=5) {
        if (heure<9) {
            printf("Parc fermé\n");
        }
        else if (heure>=19) {
            printf("Parc fermé\n");
        }
        else if (heure<=13) {
            printf("Vous devez payer : 18 €\n");
        }
        else {
            prix=6+((19-heure)*2);
            printf("Vous devez payer : %.2f €\n",prix);
        }
    }
    
    return 0;
}

