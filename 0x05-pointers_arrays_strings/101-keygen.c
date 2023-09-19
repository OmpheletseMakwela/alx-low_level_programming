#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randomChar(char minChar, char maxChar) {
    return minChar + rand() % (maxChar - minChar + 1);
}

void generatePassword(char *password, int length) {
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char digits[] = "0123456789";

    for (int i = 0; i < length; i++) {
        int choice = rand() % 3;

        switch (choice) {
            case 0:
                password[i] = lowercase[rand() % 26];
                break;
            case 1:
                password[i] = uppercase[rand() % 26];
                break;
            case 2:
                password[i] = digits[rand() % 10];
                break;
        }
    }

    password[length] = '\0';
}
int main() {
    srand(time(NULL));

    int passwordLength = 10;
    char password[passwordLength + 1];

    generatePassword(password, passwordLength);

    printf("Generated Password: %s\n", password);

    return (0);
}
