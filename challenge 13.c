#include <stdio.h>


void afficher_binaire(int nombre) {
    //challenge 13 yes
   
    for (int i = 31; i >= 0; i--) {
        int bit = (nombre >> i) & 1; 
        printf("%d", bit);
        if (i % 4 == 0) {
            printf(" "); 
        }
    }
    printf("\n");
}

int main() {
    int nombre;

  
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

 
    printf("Valeur hexadécimale : %x\n", nombre); 

    printf("Valeur binaire : ");
    afficher_binaire(nombre);  
    return 0;
}
