// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
   
    //**********************************
    
    char *names[4]= {"reda", "talha","simo","lamyae"};
    char *chaine[1];
    printf("Entrer le nom de livre : ");
    scanf("%s", &chaine[0] );
    
    printf("%s", &chaine[0]);
    
    


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
   


}