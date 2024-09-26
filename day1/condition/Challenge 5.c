#include<stdio.h>
#include<math.h>

int main () {
    //challenge 5 yes
    int Mois , Jours , Heures , Minutes , Secondes ; // les coefficients de l'équation
   int Anne ; 
    
 
     printf("Entrez une année  :  ");
     scanf("%d", &Anne);
     
     Mois = Anne * 12 ;
     Jours = Anne * 365 ;
     Heures = Jours * 24 ;
     Minutes = Heures *60 ;
     Secondes = Minutes * 60 ;
     
    
     
     printf("%d année = %d Mois,%d Jours,%d Heures,%d Minutes,%d Secondes",Anne , Mois , Jours , Heures , Minutes , Secondes );
     
      
    
}