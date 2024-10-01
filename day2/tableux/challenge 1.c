#include <stdio.h>
#include <stdlib.h>

int main() {
    //challenge 1 yes
    
    int X[]={5,6,3,2,9,6,3};
    int i = 0 ;
    
    int tol = sizeof(X)/sizeof(X[0]);
    
    while ( i < tol) {
        printf("%d\n",X[i] );
        i++ ;
    }
   
   return 0;

}