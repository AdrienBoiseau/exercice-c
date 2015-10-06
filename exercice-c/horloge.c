//
//  horloge.c
//  exercice-c
//
//  Created by Adrien Boiseau on 04/10/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "horloge.h"
#include <stdio.h>


int horloge (void) {
    
    float heure;
    printf("heure : ?\n");
    scanf("%f",&heure);
    float minute;
    printf("minute : ?\n");
    scanf("%f",&minute);
    float seconde;
    printf("seconde : ?\n");
    scanf("%f",&seconde);
    
    float heurefinal;
    heurefinal=0;
    
    if (heure!=23 && minute==59 && seconde==59) {
        heurefinal=heure+1;
        seconde=00;
        minute=00;
        printf("L'heure est : %.0fh",heurefinal);
        printf("%.0fm",minute);
        printf("%.0fs\n",seconde);
    }
    else if (seconde==59 && heure!=23) {
        heurefinal=heure;
        seconde=00;
        minute=minute+1;
        printf("L'heure est : %.0fh",heurefinal);
        printf("%.0fm",minute);
        printf("%.0fs\n",seconde);
    }
    
    else if (heure<24 && minute<60 && seconde<59){
        heurefinal=heure;
        seconde=seconde+1;
        minute=minute;
        printf("L'heure est : %.0fh",heurefinal);
        printf("%.0fm",minute);
        printf("%.0fs\n",seconde);
    }
    else if (heure>23) {
        printf ("Erreur\n");
        
    }
    else if (heure==23 && minute==59 && seconde==59) {
        heurefinal=00;
        seconde=00;
        minute=00;
        printf("L'heure est : %.0fh",heurefinal);
        printf("%.0fm",minute);
        printf("%.0fs\n",seconde);
    }
    
    return 0;
}
