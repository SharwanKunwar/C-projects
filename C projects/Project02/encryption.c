#include <stdio.h>
#include<stdlib.h>


// Author: Sarwon Jung Kunwar
// Purpose: Encrypt and decrypt a word

void encryption();
void decryption();

void space(int num){
    for(int i=1; i<=num; i++){
        printf("\n");
    }
}

int main() {
    space(40);
    int opt;

    printf("\n____________________________________________________________\n");
    printf("\n\t\tE  N  C  R  Y  P  T  I  O  N  ");
    printf("\n____________________________________________________________\n");

    printf("\n NOTE :\n\n");
    printf(" \t ENCRYPTION : Converting a word into a code.\n");
    printf(" \t DECRYPTION : Converting a code into a word.\n");

    printf("\n____________________________________________________________\n");
    printf("\n\t     1. ENCRYPTION\t2. DECRYPTION");
    printf("\n____________________________________________________________\n");
    printf("\nEnter your choice: ");
    scanf("%d", &opt);
    getchar(); // Consume newline left in buffer

    switch (opt) {
        case 1:
        system("clear");
            encryption();
            break;
        case 2:
        system("clear");
            decryption();
            break;
        default:
            printf("\nInvalid choice!\n");
    }

    return 0;
}

void encryption() {
    char word[500];    
    printf("\n____________________________________________________________\n");
    printf("\n\t\tW O R D  T O  C O D E  ");
    printf("\n____________________________________________________________\n");
    printf("\nEnter your word for encryption: ");
    fgets(word, sizeof(word), stdin);

    // Encrypting
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] != '\n') // Avoid modifying newline character
            word[i] = word[i] + 5; 
    }

    printf("\nEncrypted Code: %s\n", word);
    printf("\n____________________________________________________________\n\n");
}

void decryption() {
    char word[500];
    printf("\n____________________________________________________________\n");
    printf("\n\t\tC O D E  T O  W O R D  ");
    printf("\n____________________________________________________________\n");
    printf("\nEnter the encrypted code for decryption: ");
    fgets(word, sizeof(word), stdin);

    // Decrypting
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] != '\n') // Avoid modifying newline character
            word[i] = word[i] - 5;
    }

    printf("\nDecrypted Word: %s\n", word);
    printf("\n____________________________________________________________\n\n");
}
