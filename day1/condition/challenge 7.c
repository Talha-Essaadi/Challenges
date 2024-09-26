// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // challenge 7 YES
    // ( A - Z ) from 65 to 90 and ( a - z ) from 97 to 122
    char x ;
    printf("entrez un charactere :");
    scanf("%c" , &x) ;
    
    
    if ( x > 64 && x < 91 ) {
      printf(" alphabet majuscule");  
    }    
else if ( x > 96 && x < 123 ) {
      printf(" alphabet no majuscule");  
    }
    

   
    return 0;
}