#include<stdio.h>

int main () {
    //challenge 3 yes
    int x ;
    int y ;
    
 
      printf("Entrez un 1ere nombre entier  : ");
      scanf("%d", &x);
      
      printf("Entrez un 2eme nombre entier  : ");
      scanf("%d", &y);
      
      if ( x == y ) {
          int a = ( x + y ) * 3 ;
           printf("%d" , a);
          
      }
    
    else {
        int b =  x + y  ;
         printf("%d" , b);
         
    }
}