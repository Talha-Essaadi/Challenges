#include <stdio.h>
#include <math.h>

int main () {
    //challenge 10 yes
    float r ;
    const float Pi = 3.14 ;
    
     printf("donner le Rayon de sphere : ");
     scanf ("%f", &r);
     
     float S = ( 4 / 3 ) * Pi * pow(r , 3) ;
     
     printf(" le Volume de sphere est  :%.2f\n" , S);
     
}