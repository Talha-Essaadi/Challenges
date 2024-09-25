#include <stdio.h>

int main() {
    // challenge 12
    int nombre, millier, centaine, dizaine, unite, inverse;

    
    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d", &nombre);

    
    millier = nombre / 1000;             
    centaine = (nombre / 100) % 10;      
    dizaine = (nombre / 10) % 10;         
    unite = nombre % 10;                  

    inverse = (unite * 1000) + (dizaine * 100) + (centaine * 10) + millier;

    printf("L'inverse est : %d\n", inverse);

    return 0;
}
