// Online C compiler to run C program online
#include <stdio.h>

int main() {
     //challenge 1 yes
     int x ;
     int i = 1 ;
     printf("Entrez un nombre entier : ");
    scanf("%d", &x);
     
     while ( i < 11 ) {
         int y = i * x ;
         printf("%d * %d = %d \n", i , x , y);
         i++ ;
     }
     
}
   
   