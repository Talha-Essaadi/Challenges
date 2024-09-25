#include <stdio.h>

int main() {
    //challenge 3
    float Km ;
    printf("Entrez la distance en kilomètres : ");
    scanf("%f", &Km);
    
    float Yards = Km * 1093.61 ;
    printf("la distance en kilomètres yards est : %.2f" , Yards);

    return 0;
}