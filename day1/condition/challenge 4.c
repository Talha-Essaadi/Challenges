#include<stdio.h>
#include<math.h>

int main () {
    //challenge 4
    int a , b , c ; // les coefficients de l'équation
   int D ; 
    
 
      printf("Entrez les coefficients de l'équation  : \na = ");
      scanf("%d", &a);
      
      printf("b = ");
      scanf("%d", &b);
      
     printf("c = ");
     scanf("%d", &c);
     
     D = pow(b , 2) - 4 * a * c ;
     
     if ( D > 0 ) {
       printf("L'équation a deux solutions dans R, la première solution est x1, la deuxième solution est x2\n" );
       int X1 = (-b - sqrt(D)) / (2 * a) ;
       printf("X1 = %d\n" , X1); 
       int X2 = (-b + sqrt(D)) / (2 * a) ;;
       printf("X2 = %d\n " , X2); 
     }
     
     else if ( D == 0 ) {
          printf("L'équation a une solutions "); 
     }
     
     else   {
         printf("Cette équation n'a pas de solution dans R");
     }
     
      
      
    
}