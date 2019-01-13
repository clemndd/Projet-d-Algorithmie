
#include "header.h"
#define ROUGE 0
#define VERT 1
#define BLEU 2
#define JAUNE 3
#define NOIR 4
#define BLANC 5
#include <windows.h>

void color(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

void reglesv1 (){
    printf("But du Mastermind : \n");
    printf("Un joueur va elaborer une combinaison difficilement dechiffrable, son adversaire devra deviner en un minimum de coups\nla combinaison secrete.\n");
    printf("Nombre de coups maximum : 10 coups \n");
    printf("Le gagnant est celui qui trouve la combinaison secrete. Dans le cas contraire, il sera perdant.\n");
}

void jeuv1(){
    int menu = 0;
    int i;
    int secret[4];
    int reponse[4];
    int valide = 0;
    
    printf ("Choisissez le mode de jeu de votre choix \n");
    printf("Quel est votre choix? \n");
    printf("1- Mode 1 joueur \n");
    printf("2- Mode 2 joueurs \n");
    printf("0- Retour \n");
    printf("Saisir le mode de votre choix \n");
    scanf("%d",&menu);
    
    switch (menu){
        
        case 0:
            break;
            
        case 1:
            initSecretv1(secret);
            break;
            
        case 2:
            initSecretChoixv1(secret);
            printf("Joueur 2 a vous de jouer! \n");
            break;
    }
    
    for (i=0; i<10 && valide == 0; i++){
        selectionv1(reponse);
        valide = 1 - verificationv1(reponse, secret);
    }
    
    if(valide == 1) {
        printf("Vous avez gagne! \n");
    } else {
        printf("Vous avez perdu! \n");
    }
}

void initSecretv1(int secret[]) {
    int i;
    
    for (i=0; i<4; i++){
        secret[i] = rand()%6;
    }
}

void initSecretChoixv1(int secret[]){
    int i;
    printf("Joueur 1 a vous de jouer! \n");
    for(i=0; i<4; i++){
        int couleur;
        printf("Choisir une couleur \n");
        printf("0- rouge \n");
        printf("1- vert \n");
        printf("2- bleu \n");
        printf("3- jaune \n");
        printf("4- noir \n");
        printf("5- blanc \n");
        scanf("%d",&couleur);
        secret [i] = couleur;
    }
}

int selectionv1(int reponse[]){
    int i;
    for (i=0; i<4; i++){
        int couleur;
        printf("Choisir une couleur \n");
        printf("0- rouge \n");
        printf("1- vert \n");
        printf("2- bleu \n");
        printf("3- jaune \n");
        printf("4- noir \n");
        printf("5- blanc \n");
        scanf("%d",&couleur);
        
        reponse[i] = couleur;
    }
}

int verificationv1(int reponse [], int secret []){
    int i;
    int j;
    int cptPosition = 0;
    int cptCouleur = 0;
    int erreur = 0;
    
    
    for(i=0; i<4; i++){
       if (reponse[i] != secret[i]){
           erreur = 1;
           for(j=0; j<4; j++){
               if(reponse[i] == secret[j]){
                   cptCouleur++;
           }
       }
       } 
       else {
           cptPosition++;
       }
       
    }
    printf("Il y a %d pions bien places \n", cptPosition);
    printf("Il y a %d bonnes couleurs \n", cptCouleur);
    
    return erreur;
}
