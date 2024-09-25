#include <stdio.h>

int main() {
    //challenge 1 yes
   
    char adresse_email[50],sexe[50]  , prénom[50] , nom[50] , âge[2];
    
    
    printf("Entrez votre nom : ");
    scanf("%s", &nom) ;
    printf("Entrez votre prénom : ");
    scanf("%s", &prénom) ;
    printf("Entrez votre âge : " );
    scanf("%s", &âge) ;
    printf("Entrez votre sexe : ");
    scanf("%s", &sexe) ;
    printf("Entrez votre adresse email : ");
    scanf("%s", &adresse_email) ;
   
   
   printf("votre nom est : %s\nvotre prénom est : %s\nvotre âge : %s\nvotre sexe est : %s\nvotre adresse email est : %s\n", nom , prénom , âge , sexe , adresse_email) ;
    return 0; // Return 0 to indicate successful execution
}
