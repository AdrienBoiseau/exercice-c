//
//  nombre_plus_grand.c
//  main2.c
//
//  Created by Adrien Boiseau on 26/09/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "nombre_plus_grand.h"
#include <stdio.h>
#include <math.h>

int grand (void) {
    float x;
    printf("x=?\n");
    scanf ("%f", &x);
    float y;
    printf("y=?\n");
    scanf ("%f", &y);
    float z;
    printf("z=?\n");
    scanf ("%f", &z);
    float grand;
    
    grand=x;
    if (y>grand) {
        grand=y;
        if (z>grand) {
            grand=z;
        }
    }
    else if (z>grand) {
        grand=z;
        
    }
    printf("La valeur la plus grande est : %.2f\n",grand);
    
    return 0;
}

