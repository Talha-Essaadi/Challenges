// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //challenge 10 yes
   char *mois[] = {"Janvier","Février","Mars","Avril","Mai","Juin","Juillet","Août","Septembre","Octobre","Novembre","Décembre"};
   int jour ;
   int month ;
   int anne ;
   

   printf("Entrez une date au format 15/09/2012 : ");
    scanf("%d/%d/%d", &jour, &month, &anne);
  
   
   int num1 = month - 1 ;
   

   printf("%d-%s-%d",jour, mois[num1] ,anne );
    return 0;
}