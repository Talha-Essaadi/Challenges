// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int nombre;
 
 
 printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    int i = nombre - 1 ;
    int  y ;
    
    int h = 0 ;
    int n = 0 ;
    
    while ( i > 1) {
        y = nombre % i ;
        i-- ;
        if( y != 0) {
    h++ ;
        }
   
 else if(y == 0) {
    n++ ;
    }
 } 
 
  if(n == 0) {
    printf("c'est un nombre premier \n");
}
   
if( n > 0) {
    printf("ce n'est pas un nombre premier");

 }
 
 
}

// printf("c'est un nombre premier "); 
//printf("ce n'est pas un nombre premier");




