// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>


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
    //////////////////////////////
     char N[20] ;
    printf("entre titre pour recherche : ");
    
    scanf("%s",&N);
    
    //printf("%s\n", N);
    

   //////////////////////////////////////////// 
int y;
int h = 0 ;
for ( int i = 0 ; i < 4 ; i++) {
    y = strcmp(T[i], N) ;
    
     if ( y == 0 ) {
           h++;
        }   
       
    
}

   
        if ( h == 0 ) {
           printf("NO\n");    
        }   
        else {
            printf("YES\n");  
        }
        

///////////////////////////////////////////////////
    return 0;
}