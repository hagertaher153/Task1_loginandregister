#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct {
    char username[50];
    char password[50];
} User;

User users[100];
int numUsers = 2;

void registers() {
    User regUser;

    printf("Enter userName : ");
    scanf("%s", regUser.username);

    printf("Enter password : ");
    scanf("%s", regUser.password);

    users[numUsers] = regUser;
    numUsers++;

    printf("Thank You For Registration!\n");
}

int login() {
    char username[50];
    char password[50];

    strcpy(users[0].username,"hager");
    strcpy(users[0].password,"h123");

    strcpy(users[1].username,"taher");
    strcpy(users[1].password,"t456");

    printf("Enter userName : ");
    scanf("%s", username);

    printf("Enter password : ");
    scanf("%s", password);


    for (int i = 0; i < numUsers; i++) {
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
            printf("Thank You For Login!\n");
            return 1;
        }
    }

    printf("Invalid userName or password.\n");
    return 0;
}

int main() {
    char answer;

    while ("y") {
        printf("Do you have an email?  (y|n)\n");
        printf("To exit (e)\n");
        printf("Enter your answer : ");
        scanf("%s", &answer);

        switch (answer) {
            case 'n':
                registers();
                printf("//////////////////////////////////////////\n");
                break;
            case 'y':
                login();
                printf("//////////////////////////////////////////\n");
                break;
            case 'e':
                printf("Exit successful\n");
                return 0;
            default:
                printf("Invalid answer.\n");
        }
    }

    return 0;
}
