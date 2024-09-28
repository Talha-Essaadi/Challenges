#include <stdio.h>

int main() {
   // challenge   
    
    int  N ; 
    int  I = 0 ; 

   
    printf("Entrez un nombre : ");
    scanf("%d", &N);
    
    while (N != 0) {
        I  = ( I * 10 ) + ( N % 10) ;
        N = N / 10 ;
        
    }
    printf("le  nombre est : %d ", I);
}
