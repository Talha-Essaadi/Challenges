// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //challenge 12  yes
  
   int HH , MM , SS;

   int HH2 , MM2 , SS2 ;
   

   printf("Entrez deux instants dans le format HH:MM:SS \n");
   printf("Entrez  instant un : ");
    scanf("%d:%d:%d", &HH, &MM, &SS);
    
   printf("Entrez  instant deux : ");
    scanf("%d:%d:%d", &HH2, &MM2, &SS2);
    
 if ( HH < 25 && HH >=0 &&  HH2 < 25 && HH2 >=0 && MM < 61 && MM >=0 &&  MM2 < 61 && MM2 >=0 && SS < 61 && SS >=0 &&  SS2 < 61 && SS2 >=0 ) {
     if ((HH > HH2 && MM >= MM2 && SS >= SS2) || (HH >= HH2 && MM > MM2 && SS >= SS2) || (HH >= HH2 && MM >= MM2 && SS > SS2)  ) {
   printf("Le premier instant vient avant le deuxième ");  
 } 
  else if ((HH2 > HH && MM2 >= MM && SS2 >= SS) || (HH2 >= HH && MM2 > MM && SS2 >= SS) || (HH2 >= HH && MM2 >= MM && SS2 > SS)) {
   printf("Le deuxième instant vient avant le premier ");  
 } 
  else if (HH == HH2 && MM == MM2 && SS == SS2 ) {
   printf("Il s'agit du même instant ");  
 } 
 }
 else  {
   printf("Tu as un problème au format ");
 
 }  

  
    return 0;
}