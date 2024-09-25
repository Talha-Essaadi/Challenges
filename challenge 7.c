// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // challenge 7 yes
    float n1 , n2 , n3 ;
    int w1 , w2 , w3 ;
    
    printf("entrez le 1er nombre  : ");
    scanf ("%f" , &n1);
    
     printf("entrez la 2ème nombre : ");
    scanf ("%f" , &n2);
    
    printf("entrez la 3ème nombre : ");
    scanf ("%f" , &n3);
    
    float moyenne_pondérée = ( n1 * w1 + n2 * w2 + n3 * w3) / ( w1 + w2 + w3)  ;
    
    printf("le moyenne pondérée est  : %.2f ", moyenne_pondérée);

    return 0;
}