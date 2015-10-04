//
//  annee_bissextile.c
//  main2.c
//
//  Created by Adrien Boiseau on 26/09/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "annee_bissextile.h"
#include <stdio.h>
#include <math.h>

int annee (void) {
    int annee;
    printf("Veuillez entrer un année :\n");
    scanf("%d",&annee);
    
    if (((annee%4==0)&&(annee%100!=0))||((annee%400))==0) {
        printf("Cette année est bissextile\n");
    }
    else {
        printf("Cette année est non bissextile\n");
    }
    
    return 0;
}