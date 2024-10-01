// Online C compiler to run C program online
#include <stdio.h>

// challenge 2 yes

int sum( int a  , int b) {
    
    int result = a * b  ;
      printf("result est : %d", result);
  }
  
int main() {
    int a, b ;
  printf("the the velue 1 and 2 :");
  scanf("%d %d", &a , &b);
  int result = sum( a , b );
  
  return 0 ;
}

