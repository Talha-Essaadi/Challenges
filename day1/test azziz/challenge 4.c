// Online C compiler to run C program online
#include <stdio.h>

int main() {
 

int a , b , c , d , e;

 printf("Entrez 5 entiers \n");
 printf("Entrez 1ere entiers :");
 scanf("%d", &a);
 
  printf("Entrez 2eme entiers :");
 scanf("%d", &b);
 
  printf("Entrez 3eme entiers :");
 scanf("%d", &c);
 
  printf("Entrez 4eme entiers :");
 scanf("%d", &d);
 
  printf("Entrez 5eme entiers :");
 scanf("%d", &e);


int S[] = {a , b , c , d , e} ;
int i , grand , petit;

grand = S[0];
petit = S[0];

for (i = 0; i < 5; i++) {
  if (petit > S[i]) {
    petit = S[i];
  }
  
  if (grand < S[i]) {
    grand = S[i];
  }
  
} 



    printf("le plus grand : %d\n", grand);


    printf("le plus petit : %d\n", petit);

 }
 
     