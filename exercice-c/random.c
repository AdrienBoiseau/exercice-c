//
//  random.c
//  exercice-c
//
//  Created by Adrien Boiseau on 06/10/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define min 90
#define max 98
#define nbcoup 5
#define but 98

int randomm (void) {
    srand( (unsigned int)time(NULL) );
    int i;
    int k;
    k=0;
    int x;
    for (x=1; x<=nbcoup && k!=but ;x++)
    {
        k=min+rand()%(max-min+1);
        i++;
        printf("%d\n",k);
    }
    printf("La nombre de coup tiré avant d'atteindre but est : %d\n",i);
    if (i==nbcoup) {
        printf("Perdu\n");
    }
    else {
        printf("Gagner\n");
    }
    return 0;
    
}

