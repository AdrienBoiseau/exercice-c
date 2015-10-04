//
//  delta.c
//  main2.c
//
//  Created by Adrien Boiseau on 26/09/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "delta.h"
#include <stdio.h>
#include <math.h>

int delta(void) {
    //Début du programme
    
    float a;
    printf("A=?\n");
    scanf ("%f", &a);
    
    float b;
    printf("B=?\n");
    scanf ("%f", &b);
    
    float c;
    printf("C=?\n");
    scanf ("%f", &c);
    
    float x1;
    x1=0;
    
    float x2;
    x2=0;
    
    float delta;
    
    //Calcul de delta.
    
    delta = (b*b)-(4*a*c);
    
    printf ("Delta = %.2f\n",delta);
    
    //Début des conditions.

    if (a==0) {
        if (b==0)
        {
            if (c==0) {
                printf("Il y a une infinité de solution.\n");
            }
            else {
                printf("Il n'y a aucune solution \n");
            }
        }
        else {
            x1=-c/b;
            printf("Il y a une solution : %.2f\n",x1);
        }
    }
    else {
        
        //Delta supérieur à zéro.
        
        if (delta>0)
        {
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
            printf("Les deux racines sont : X1 = %.2f et X2 = %.2f\n",x1, x2);
        }
        
        //Delta égal à 0.
        
        else if (delta==0)
        {
            x1 = -b /(2*a);
            printf("Il n'y a qu'une solution qui est X = %.2f\n",x1);
        }
        
        //Delta inférieur à 0.
        
        else
        {
            printf("L'équation n'admet pas de solution\n");
        }
    }
    
    //Fin du programme
    
    return 0;
}

