// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    // challenge 9 yes
    float x1 , x2 ,y1 ,y2 ,z1 ,z2 ;
    printf("donner les cordonne de premier :\n");
    printf("x1 = ");
    scanf("%f" , &x1) ;
    printf("y1 = ");
    scanf("%f" , &y1) ;
    printf("z1 = ");
    scanf("%f" , &z1) ;
    
      printf("donner les cordonne de deuxieme :\n");
    printf("x2 = ");
    scanf("%f" , &x2) ;
    printf("y2 = ");
    scanf("%f" , &y2) ;
    printf("z2 = ");
    scanf("%f" , &z2) ;
    
 float Distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
printf("la distance entre les deux points est :%.2f" , Distance );
    return 0;
}