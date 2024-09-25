#include <stdio.h>

int main() {
    //challenge 4 yes
    float km_h ;
    printf("Entrez la vitesse en kilomètres par heure (km/h)  :");
    scanf("%f", &km_h);
    
    float m_s = km_h * 0.27778 ;
    
    printf("la vitesse en mètres par seconde est : %.2f" , m_s);

    return 0;
}