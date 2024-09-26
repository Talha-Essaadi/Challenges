// Online C compiler to run C program online
#include <stdio.h>

int main() {
     //challenge 5 yes 
     int x ;
     int y ;
    printf("Entrez un nombre entier ( base ) : ");
    scanf("%d", &x);
    
    printf("Entrez un nombre entier ( exposant ) : ");
    scanf("%d", &y);
    
    int i = 1 ;
    int s = x ;
  
    while ( i < y) {
       x = x * s ;
       i++;
        
    }
    
     
    printf("%d",x);
    
    
    
    
}
   
   