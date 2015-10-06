//
//  exo6.c
//  exercice-c
//
//  Created by Adrien Boiseau on 06/10/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "exo6.h"
#include <stdio.h>

int exosix (void) {
    int x;
    int z=0;
    int y;
    float reste=0;
    
    printf("Valeur de x : ?\n");
    scanf("%d",&x);
    printf("Valeur de y : ?\n");
    scanf("%d",&y);
    
    if (x<y) {
        printf("Erreur\n");
    }

    else {
        while (x!=0) {
            if (x%2==1) {
                z+=y;
                x--;
                }
            else {
                x=(x/2);
                y=y+y;
            }
            reste=reste+y;

        }
    }

    printf("Le resultat est : %d\n",z);
    return 0;
}