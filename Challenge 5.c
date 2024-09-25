#include <stdio.h>

int main() {
    //challenge 5 yes
    float C ;
    printf("Entrez la température en Celsius  : ");
    scanf("%f", &C);
    
    if ( C < 0) {
        printf("l'état de l'eau à cette température est :  Solide "); 
    }
    
     else if ( 0 <= C && C < 100) {
        printf("l'état de l'eau à cette température est :   Liquide "); 
    }
     else if ( C >= 100) {
        printf("l'état de l'eau à cette température est :  Gaz "); 
    }
    
    
   
    
   

    return 0;
}