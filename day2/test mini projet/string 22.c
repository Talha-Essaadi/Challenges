// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int i = 0 ;
   char *names[400];
    char *T[4] = {"le titre", "l'auteur","le prix","la quantité"};
   
   /////////////////
   /*while (i < 4) {
      
     printf("%s\n", names[i] );  
     i++;
   }*/
   /////////////////////
   
   int z = 0 ;
   while (z < 4) {
      printf("Entrez %s du livre : ", T[z]) ;
     scanf("%s", &names[z] );  
     z++;
   }
   
  //////////////////////// 
  int r = 0 ;
 while (r < 4) {
     printf("%s\n", &names[r] );  
     r++;
   }
    
}