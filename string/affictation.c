// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char T[4][20];
    int i = 0 ;
    for ( i = 0 ; i < 4 ; i++){
        printf("Entres le nom : ");
        scanf("%s", T[i]);
    }
    
    
    for(  i = 0 ; i < 4 ; i++){

        
      printf("%s\n",T[i] );  
    
      
    }
    
    
    
    
    
    
   /* for(int i = 0 ; i < 4 ; i++){
      // for(int j = 0 ; j < 20 ; j++){
        
      printf("%s",T[i] );  
    //} 
       printf("\n");
    }*/
    

    return 0;
}