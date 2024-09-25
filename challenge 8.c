// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //challenge 8 yes
   int num1 , num2 , num3 ;
   
    printf("entrez le premier numero : ");
    scanf ("%d" , &num1);
    
    printf("entrez le deuxieme numero : ");
    scanf ("%d" , &num2);
    
    printf("entrez le triosieme numero : ");
    scanf ("%d" , &num3);
    
    float mg = ( num1 * num2 * num3 ) ^ ( 1 / 3 ) ;
    printf("le moyenne geometrique est : %.2f " , mg);
    
    return 0;
}