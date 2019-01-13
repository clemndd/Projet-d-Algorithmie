/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: clemence.nadaud
 *
 * Created on 7 janvier 2019, 19:12
 */

#include "header.h"

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(0));
    int menu = 0;
    color(11,0);
    printf("===================================== \n");
    printf ("Bienvenue sur le jeu du Mastermind! \n");
    printf("===================================== \n");
    printf("\n");
    printf ("Quel est votre choix? \n");
    printf("\n");
    printf ("0- Quitter le programme \n");
    printf ("1- Regles du jeu \n");
    printf ("2- Jouer au Mastermind \n");
    printf("\n");
    printf ("Saisir le programme de votre choix \n");
    scanf ("%d",&menu);


    void color(int t,int f);
    
switch (menu){
    
    case 0 :
        break;
        
    case 1 :
        printf("\n");
        reglesv1();
        break;
        
    case 2 :
        printf("\n");
        jeuv1();
        break;
}
    return (0);
}
