#include<stdio.h>

int main () {
    int x ;
      printf("Entrez un nombre entier : "  );
      scanf("%d", &x);
      int y = x % 2 ;
      if ( y == 0) {
          printf("le  nombre est   pair   "  );
      }
       else if ( y != 0) {
         printf("le  nombre est  impair  "  ); 
       }
      
      
      
}