// Online C compiler to run C program online
#include <stdio.h>

int main() {
     //challenge 2 yes
     int x ;
     
     printf("Entrez un nombre entier : ");
    scanf("%d", &x);
    int i = x ;
    int s = 0 ;
     
     while ( i > 0 ) {
         i-- ;
         int y = i * x ;
         s = s +y ;
        
         
         
       if ( i == 1 ) {
        printf("%d! = %d \n", x , s);   
       }  
         
        
     }
    
}
   
   