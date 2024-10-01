// Online C compiler to run C program online
#include <stdio.h>



int sum( int a  , int b) {
    
    int result  ;
    if (b > a) {
        printf("le plus petit entre %d and % d est : %d", a , b,a );
    }
    else if (b < a) {
        printf("le plus petit entre %d and % d est : %d", a , b ,b );
    }
      
  }
  
int main() {
    int a, b ;
  printf("the the velue 1  : ");
  scanf("%d", &a);
  printf("the the velue 2 : ");
  scanf("%d",  &b);
  int result = sum( a , b );
  
  return 0 ;
}

