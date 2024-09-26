#include <stdio.h>

int main() {
   
    float x1, y1, x2, y2; 
    float x, y;        

   
    printf("Entrez les coordonnees du premier extremite du segment (x1 y1) : ");
    scanf("%f %f", &x1, &y1);
    
    printf("entrez les coordonnees du deuxieme extremite du segment (x2 y2) : ");
    scanf("%f %f", &x2, &y2);
    
   
    printf("Entrez les coordonnees du point (x y) : ");
    scanf("%f %f", &x, &y);
    
    
    float Formule= (x - x1) * (y2 - y1) - (y - y1) * (x2 - x1);
    
   
    if (Formule == 0 && 
        (x >= x1 && x <= x2 || x >= x2 && x <= x1) && 
        (y >= y1 && y <= y2 || y >= y2 && y <= y1)) {
        printf("le point (%f, %f) est sur le segment.\n", x, y);
    } else {
        printf("le point (%.2f, %.2f) ne est pas sur le segmment.\n", x, y);
    }

    return 0;
}
