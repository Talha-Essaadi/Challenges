#include<stdio.h>

int main() {
   //challenge 6 yes
    int num1, num2;
    char choice;

    printf("Enter a choice:\n1:(+)\n2:(-)\n3:(/)\n4:(*)\n ");
    scanf(" %c", &choice); 

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (choice == '+' || choice == '1') {
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    }

    else if (choice == '-' || choice == '2') {
        printf("%d - %d = %d\n", num1, num2, num1 - num2);  
    }

    else if (choice == '/' || choice == '3') {
        if (num2 != 0) { 
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }

    else if (choice == '*' || choice == '4') {
        printf("%d * %d = %d\n", num1, num2, num1 * num2);  
    }

    else {
        printf("Error in choice!\nExiting...\n");
    }

    return 0;
}
