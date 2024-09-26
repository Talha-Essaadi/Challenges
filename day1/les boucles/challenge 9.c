// Online C compiler to run C program online
#include <stdio.h>

int main() {
     //challenge 9 yes
     int x ;
     
     printf("Entrez un nombre entier positif: ");
    scanf("%d", &x);
    
  int i = x ;
  int a = x ;
     
     while ( x >= 1 ) {
         
          x = x / 10;
         i-- ;
       
     }
     int y = a - i ;
     printf("%d \n", y) ;
     
  
 
 
}
   
   
   