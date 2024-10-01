// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int i = 0 ;
   char *names[4];
   
   /////////////////
   /*while (i < 4) {
      
     printf("%s\n", names[i] );  
     i++;
   }*/
   /////////////////////
   int z = 0 ;
   
   while (z < 4) {
      printf("Entre names : ") ;
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