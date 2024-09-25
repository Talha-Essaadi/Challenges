// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // challenge 11 yes
    float longueur , largeur ;
    
    printf("entrez la longueur : ");
    scanf ("%f" , &longueur);
    
     printf("entrez la largeur : ");
    scanf ("%f" , &largeur);
    
    float surface =  largeur * longueur ;
    
    printf("le surface  : %.2f ", surface);

    return 0;
}