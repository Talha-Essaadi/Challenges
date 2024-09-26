// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // challenge 6 YES
    int x ;
  
    printf("Entrez un nombre entier : ");
    scanf("%d", &x);
if ( x > 0 ) {
    printf("le nombre que vous avez entre est positif");
}

else if (x < 0) {
     printf("le nombre que vous avez entre est Négatif ");
}

else {
    printf("le nombre que vous avez entre est Nul");
}
    return 0;
}