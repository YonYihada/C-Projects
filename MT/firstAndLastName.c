#include<stdio.h>
int main() {
    char firstName[100], lastName[100];
    while(1){
        printf("Enter your First Name: ");
        scanf("%s", &firstName);
        printf("Enter your Last Name: ");
        scanf("%s", &lastName);
        printf("Hello %s %s\n", firstName, lastName);
    }
}
