// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int T[20] ;
    for(int i = 0; i<4 ;i++){
    printf("entre name : ");
    scanf("%d",&T[i]);
    }
    
   
    for(int i = 0; i<4 ;i++){// stop on  element null >4 is null
    printf("%d\n",T[i]);
    
    }//////////////////
     
     int k ;
    printf("entre titre pour recherche : ");
    
    scanf("%d",&k);

    //printf("%d\n",k); 
    
    //////////////////////
    int h = 0 ;
    for (int i = 0 ; i < 20 ; i++) {
        if (k == T[i]) {
            printf("%d yes exict" ,k ) ;
            h++;
        }
        
    }
    
    if ( h == 0 ) {
        printf("%d No exict" ,k ) ;
    }
    return 0;
   
}