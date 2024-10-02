// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    float T[] = {5.3,55.43,54.434,23.545,97.54,43.5,23.54,5.44,98.44,34.44,34.44,5.44} ;
    
    int reselt = sizeof(T)/sizeof(T[0]);
    
    float x = 5.44 ;
    
    printf("the size est : %d\n", reselt);
    int h = 0 ;
    for(int i = 0 ; i < reselt ; i++){
        if( x == T[i]){
            h++ ;
            printf("the value :  %.2f , dans element : %d , et dans index : %d\n",T[i],i+1 , i);
            
        }
         
    }
printf("\nthe number of X in this array est : %d",h);
    return 0;
}



