#include <stdio.h>
#include <stdlib.h>

int main() {
    // challenge 6 yes
    int y ;
    
    printf("Entres  le nombre d'éléments d'un tableau : ");
    scanf("%d", &y);
    int X[y];
    int i = 0 ;
   
    //int tol = sizeof(X)/sizeof(X[0]);
    // printf("%d\n",tol );
     
     int z = 0 ;
     
     while( z < y){
         printf("Entrez valeue d'element : ");
         scanf("%d", &X[z]);
         z++ ;
     }
     
     int f ;
     printf("Entrez  le facteur de multiplication : ");
     scanf("%d", &f);
     
     int k ;
     
    while ( i < y) {
        k = f * X[i] ;
        printf("Ruselt de element %d multiplie par la  facteur est : %d \n", i+1 , k );
        i++ ;
    }
   
   return 0;

}