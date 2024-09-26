#include<stdio.h>

int main () {
    //challenge 2 yes
    char x ;
      printf("cette programme en C qui vérifie si un caractère est une voyelle ou non \n"   );
      printf("Entrez un caractère  : ");
      scanf("%c", &x);
    
     switch (x) {
          // a, e, i, o, u, et y
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'y':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
  case 'Y':
   printf("le caractère saisi cette un  voyelle");
   
    break;
  default:
    printf("le caractère saisi no  voyelle");
}
     
       
}