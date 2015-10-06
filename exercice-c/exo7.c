//
//  exo7.c
//  exercice-c
//
//  Created by Adrien Boiseau on 06/10/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "exo7.h"
#include <stdio.h>

int exosept (void) {
    int i=0;
    int j=0;
    int n=10;
    
    for (i=1;i<=n;i++) {
        for (j=0;j<(i-1);j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    
    

    
    return 0;
}
