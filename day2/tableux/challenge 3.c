#include <stdio.h>
#include <stdlib.h>

int main() {
    //challenge 3 yes
    int y ;
    
    printf("Entres  le nombre d'éléments d'un tableau : ");
    scanf("%d", &y);
    int X[y];
    int i = 0 ;
   
    //int tol = sizeof(X)/sizeof(X[0]);
    // printf("%d\n",tol );
     
     int z = 0 ;
     int s = 0 ;
     
     while( z < y){
         printf("Entrez value d'element : ");
         scanf("%d", &X[z]);
         s = s + X[z] ;
         z++ ;
     }
     
    

        printf("la somme est : %d ", s );
      
   return 0;

}