//
//  banque.c
//  main2.c
//
//  Created by Adrien Boiseau on 26/09/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//


#include "banque.h"
#include <stdio.h>
#define RETRAIT 1
#define DEPOT 2
#define DEPOTRETRAIT 3

int banque (void) {
    float solde;
    float somme;
    float somme2;
    int typeOperation;
    solde=34.50;
    typeOperation=RETRAIT;
    somme= 35.5;
    somme2= 12;
    float interet;
    interet=1.5;
    if (typeOperation==1 && solde-somme>=0) {
        solde=solde-somme;
        printf ("VRAI : Vous avez effectué un retrait, votre solde : %.2f\n",solde);
        
    }
    else if (typeOperation==2) {
        solde=solde+somme;
        printf ("VRAI : Vous avez effectué un dépôt, votre solde : %.2f\n",solde);
        
    }
    else if (typeOperation==3){
        solde=(solde+somme)-somme2;
        solde=solde+((solde/100)*interet);
        printf ("FAUX : Vous avez effecuté un dépôt et un retrait et votre compte à reçu un intérêt, votre solde : %.2f\n",solde);
    }
    else if (solde-somme<0) {
        printf ("Vous n'avez pas assez d'argent sur votre compte pour effectuer ce retrait\n");
    }
    
    if (somme+somme2 >=0) {
        printf ("Positif \n");
    }
    
    else {
        printf( "Negatif \n");
    }
    return 0;
}

    

    

