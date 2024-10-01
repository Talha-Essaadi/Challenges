#include <stdio.h>
#include <stdlib.h>

int main() {
    // challenge 2 yes
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
    while ( i < y) {
        printf("element %d = %d\n", i+1 ,X[i] );
        i++ ;
    }
   
   return 0;

}