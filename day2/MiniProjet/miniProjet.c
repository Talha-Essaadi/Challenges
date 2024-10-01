#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LEN 100
#define MAX_AUTHOR_LEN 100

// Structure pour stocker les informations d'un livre
typedef struct {
    char title[MAX_TITLE_LEN];
    char author[MAX_AUTHOR_LEN];
    float price;
    int quantity;
} Book;

// Prototypes des fonctions
void addBook(Book books[], int *count);
void displayBooks(Book books[], int count);
void updateQuantity(Book books[], int count);
void deleteBook(Book books[], int *count);
void searchBook(Book books[], int count);
void totalBooks(Book books[], int count);

int main() {
    Book books[MAX_BOOKS];
    int count = 0; // Nombre actuel de livres en stock
    int choice;

    do {
        printf("\n----- Système de Gestion de Stock de Librairie -----\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                searchBook(books, count);
                break;
            case 4:
                updateQuantity(books, count);
                break;
            case 5:
                deleteBook(books, &count);
                break;
            case 6:
                totalBooks(books, count);
                break;
            case 0:
                printf("Merci d'avoir utilisé le système de gestion de stock.\n");
                break;
            default:
                printf("Option invalide. Veuillez réessayer.\n");
        }
    } while (choice != 0);

    return 0;
}

// Fonction pour ajouter un livre au stock
void addBook(Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Stock plein ! Impossible d'ajouter plus de livres.\n");
        return;
    }

    printf("Entrez le titre du livre: ");
    scanf(" %[^\n]", books[*count].title);
    printf("Entrez l'auteur du livre: ");
    scanf(" %[^\n]", books[*count].author);
    printf("Entrez le prix du livre: ");
    scanf("%f", &books[*count].price);
    printf("Entrez la quantité de livres en stock: ");
    scanf("%d", &books[*count].quantity);

    (*count)++;
    printf("Livre ajouté avec succès !\n");
}

// Fonction pour afficher tous les livres disponibles
void displayBooks(Book books[], int count) {
    if (count == 0) {
        printf("Aucun livre en stock.\n");
        return;
    }

    printf("\nListe des livres disponibles:\n");
    for (int i = 0; i < count; i++) {
        printf("\nLivre %d:\n", i + 1);
        printf("Titre: %s\n", books[i].title);
        printf("Auteur: %s\n", books[i].author);
        printf("Prix: %.2f\n", books[i].price);
        printf("Quantité: %d\n", books[i].quantity);
    }
}

// Fonction pour rechercher un livre par son titre
void searchBook(Book books[], int count) {
    char title[MAX_TITLE_LEN];
    printf("Entrez le titre du livre à rechercher: ");
    scanf(" %[^\n]", title);

    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Livre trouvé:\n");
            printf("Titre: %s\n", books[i].title);
            printf("Auteur: %s\n", books[i].author);
            printf("Prix: %.2f\n", books[i].price);
            printf("Quantité: %d\n", books[i].quantity);
            return;
        }
    }
    printf("Livre non trouvé.\n");
}

// Fonction pour mettre à jour la quantité d'un livre
void updateQuantity(Book books[], int count) {
    char title[MAX_TITLE_LEN];
    printf("Entrez le titre du livre dont vous voulez mettre à jour la quantité: ");
    scanf(" %[^\n]", title);

    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Entrez la nouvelle quantité: ");
            scanf("%d", &books[i].quantity);
            printf("Quantité mise à jour avec succès !\n");
            return;
        }
    }
    printf("Livre non trouvé.\n");
}

// Fonction pour supprimer un livre du stock
void deleteBook(Book books[], int *count) {
    char title[MAX_TITLE_LEN];
    printf("Entrez le titre du livre à supprimer: ");
    scanf(" %[^\n]", title);

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    for (int i = 0; i < *count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            for (int j = i; j < *count - 1; j++) {
                books[j] = books[j + 1];
            }
            (*count)--;
            printf("Livre supprimé avec succès !\n");
            return;
        }
    }
    printf("Livre non trouvé.\n");
}

// Fonction pour afficher le nombre total de livres en stock
void totalBooks(Book books[], int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += books[i].quantity;
    }
    printf("Nombre total de livres en stock: %d\n", total);
}
