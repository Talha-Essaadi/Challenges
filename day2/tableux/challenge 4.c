#include <stdio.h>
#include <stdlib.h>

int main() {
    //challenge 4 yes
    int y ;
    
    printf("Entres  le nombre d'éléments d'un tableau : ");
    scanf("%d", &y);
    int X[y];
    int i = 0 ;
   
    
     
     int z = 0 ;
     
     while( z < y){
         printf("Entrez valeue d'element : ");
         scanf("%d", &X[z]);
         z++ ;
     }
    
    
    int grand = X[0];
    int h = 0 ;
    while ( h < y){
        if ( grand < X[h]) {
            grand = X[h] ; 
        }
        h++;
    }
    
    printf("le plus grand est : %d\n", grand );
   
   return 0;

}