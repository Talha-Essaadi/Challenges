// Online C compiler to run C program online
#include <stdio.h>

int main() {
 float longueur , largeur , aire , perimetre;
 printf("Entrezl longueur : ");
    scanf("%f", &longueur);
    
     printf("Entrezl  largeur : ");
    scanf("%f", &largeur);
    
    aire = longueur * largeur ;
    perimetre = 2 * (longueur + largeur) ;
    
    printf("l'aire est : %.2f\n", aire );
    printf("perimetre est : %.2f\n", perimetre);
}
   
   