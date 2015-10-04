//
//  nombre_positif_negatif.c
//  main2.c
//
//  Created by Adrien Boiseau on 26/09/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "nombre_positif_negatif.h"
#include <stdio.h>
#include <math.h>

int nombre (void) {
    
    float y;
    printf ("Entrez une valeur pour y :\n");
    scanf ("%f", &y);
    
    float x;
    printf ("Entrez une valeur pour x :\n");
    scanf ("%f", &x);
    
    if ((x*y)<0) {
        
        if (x>0) {
            if (y<0) {
                printf("X : %.2f\n",x);
            }
            else {
                printf("Problème\n");
            }
        }
        else if (x<0) {
            if (y>0) {
                printf("Y : %.2f\n",y);
            }
            else {
                printf("Problème2\n");
            }
        }
        
    }
    else {
        printf("Erreur\n");
    }
    
    return 0;
}