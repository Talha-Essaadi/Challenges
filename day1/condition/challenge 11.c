// Online C compiler to run C program online
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    //challenge 11 yes
  char *jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
   int x = rand() % 7;
   srand(time(NULL));

    
   

   printf("le jour choisi au hasard est : %s", jours[x]  );
    return 0;
}