// what is the update in this version 


// just syntax

//previos version
// case 1 : yes
// case 2 : yes
// case 3 : 80 %
// case 4 : NO
// case 5 : NO
// case 6 : yes
// case 7 : yes

// Question : line 91 
// Online C compiler to run C program online
#include <stdio.h>

int main() {
 
int x = 8 ;
int r = 0 ;
int z = 0 ;
int livre = 1 ;


while ( x <= 7 || x >= 7 ) {
    char *N3[1] ;
    printf("\n");
    printf("----- Système de Gestion de Stock de Librairie -----\n");
    printf("1. Ajouter un livre au stock : \n");
    printf("2. Afficher tous les livres disponibles\n");
    printf("3. Rechercher un livre par son titre\n");
    printf("4. Mettre à jour la quantité d'un livre\n");
    printf("5. Supprimer un livre du stock\n");
    printf("6. Afficher le nombre total de livres en stock\n");
    printf("7. Quitter\n");
    
    
    
    printf("Choisissez une option : ");
    scanf("%d", &x);
   switch (x) {
        /*Entrez le titre du livre: TALHA
Entrez l'auteur du livre: SARA
Entrez le prix du livre: 999.56
Entrez la quantité de livres en stock: 2
Livre ajouté avec succès !*/
       case 1 :
       int i = 0 ;
   char *names[400];
    char *T[4] = {"le titre", "l'auteur","le prix","la quantité"};
   
   /////////////////
   /*while (i < 4) {
      
     printf("%s\n", names[i] );  
     i++;
   }*/
   /////////////////////
   
   
   int q = 0 ;
   int ql = 0 ;
   
   //STOCKER  ELEMENT ::
   while (ql < 4) { // change z in condition while
      printf("Entrez %s du livre : ", T[q]) ;
     scanf("%s", &names[z] );  
     z++;
     ql++;
     q++;
     
   }
   printf("\n");
   printf("Livre ajouté avec succès !\n");
   printf("\n");
       break ;
       
       
       case  2 :
      //AFFICHER WITH DETAILS STOCKER********************************** 
      if ( z == 0) {
          printf("Aucun livre en stock.\n");
      }
     int num = 0 ; 
      char *N[4] = {"le titre est", "l'auteur est","le prix est","la quantité est" , };
    while (r < z) {
       
  if ( r % 4 == 0 ){
         printf("\n");
         
        printf("Livre %d :\n", livre);
       num = 0 ;
        livre++;
        
      }
     printf("%s : %s\n", N[num], &names[r] );
     
     //why I use '&' in names and we dont use '&' in N ?
     num++;
     r++;

   }
       break ;
       
       case 3 :
       printf("Entrez le titre du livre à rechercher : ");
       scanf("%s", &N3[0]);
       
       int loop = 0 ;
       loop = z / 4 ;
       int jijo = 0 ;
       int hiho = 0 ;
       int yy ;
       
       if ( z == 0) {
          printf("pas de livre trouver en stock \n Taper 2 pour trouver un livre \n"); 
       }
       else if ( z != 0 ) {
           
          while ( jijo < loop) {
              yy = *names[hiho] ;
           if( yy == *N3[0]){
             printf("le livre existe\n");  
           }
           hiho = hiho  + 4 ;
           jijo++;
      } 
       }
       
      
       break ;
       
       
       case 4 :
       printf("number : 4\n");
       break ;
       case 5 :
       printf("number : 5\n");
       break ;
       
       case 6 :
       int numLivres = z / 4 ;
       printf("le nombre total de livres en stock est : %d\n", numLivres);
       break ;
       
       case 7 :
        printf("Merci d'avoir utilisé le système de gestion de stock. \n") ;
       return 0;
       break ;
       
       default : 
       printf("le nombre est incorrecte \n") ;
       
   } 
   

}//////
    
printf("=== Session Ended. Please Run the code again === ") ; 
    
   return 0;
}