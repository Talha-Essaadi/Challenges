#include <stdio.h>

int main() {
    //challenge 2 yes
    float C ;
    printf("Entrez la température en Celsius : ");
    scanf("%f", &C);
    
    float K = C + 273.15 ;
    printf("la température en Kelvin est : %.2f" , K);

    return 0;
}