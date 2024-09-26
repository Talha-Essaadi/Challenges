// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // challenge 8 YES
    
    int x ;
    printf("entrez une moyenne :");
    scanf("%d" , &x) ;
    
    
    if (  x < 10 ) {
      printf(" recalé");  
    }    
    else if ( x >= 10 && x < 12 ) {
      printf(" passable");  
    }
    
    else if ( x >= 12 && x < 14 ) {
      printf(" assez bien");  
    }
    
    else if ( x >= 14 && x < 16 ) {
      printf(" bien");  
    }
    
    else if ( x > 16 ) {
      printf(" très bien");  
    }

   
    return 0;
}