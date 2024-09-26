// Online C compiler to run C program online
#include <stdio.h>

int main() {
     //challenge 3 yes
     int x ;
     
     printf("Entrez un nombre entier : ");
    scanf("%d", &x);
    int a = x ;
  int y ;
     
     while ( x >= 0 ) {
         
         int y = y + x ;
         x-- ;
       if ( x == 0 ){
          printf("%d = %d \n",a, y); 
       }
     }
     
  
 
 
}
   
   