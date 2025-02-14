# 🔐 Encryption & Decryption Program  

## **1. Description**  
This C program encrypts and decrypts text using a simple character shift method (+5 shift).  
The user can:  
- **Encrypt** a word by shifting each character forward by 5.  
- **Decrypt** an encrypted word by shifting each character backward by 5.  

The program includes:  
✅ Console-clearing functionality (`system("clear")`).  
✅ A **space function** to format output.  
✅ Proper user interaction with **menu-driven options**.  

---

### **Sample Code**
```c
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

```

## **2. Code Overview**  

### **Header Files**  
```c
#include <stdio.h>
#include <stdlib.h>
```
* stdio.h – For input/output functions.<br>
* stdlib.h – Includes system("clear") for console clearing.


### **Function Declarations**  
``` c functions
void encryption();
void decryption();
void space(int num);
```
* encryption() – Encrypts a given word.
* decryption() – Decrypts an encrypted word.
* space(int num) – Prints blank lines for better formatting.


### **Printing Blank Spaces (Formatting Function)**  
```c
void space(int num){
    for(int i=1; i<=num; i++){
        printf("\n");
    }
}
```

✅ This function prints num blank lines.<br>
✅ Helps format the output by pushing content down.


### **3. Main Function (Program Execution Starts Here)**  
```c
int main() {
    space(40);
    int opt;
```
* Calls space(40) to push content down by 40 lines.
* Declares opt to store the user's choice.

```c
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
```

* ✅ Prints a menu for the user.
* ✅ Reads input (1 for encryption, 2 for decryption).
* ✅ Uses getchar() to remove extra newline from scanf().

### **Switch Case for User Selection**
```c
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
```

* ✅ Clears the console (system("clear")) before running the selected function.
* ✅ Calls encryption() or decryption() based on the user’s choice.
* ✅ Displays an error message for invalid input.


### **4. Encryption Function**
```c
void encryption() {
    char word[500];    
    printf("\n____________________________________________________________\n");
    printf("\n\t\tW O R D  T O  C O D E  ");
    printf("\n____________________________________________________________\n");
    printf("\nEnter your word for encryption: ");
    fgets(word, sizeof(word), stdin);
```
* Declares word[500] to store user input.
* Uses fgets() to safely take input.

### **Encrypting the Word**
```c
for (int i = 0; word[i] != '\0'; i++) {
    if (word[i] != '\n') // Avoid modifying newline character
        word[i] = word[i] + 5; 
}
```
* ✅ Loops through each character.
* ✅ Encrypts by shifting each character forward by 5 (word[i] + 5).
* ✅ Avoids modifying \n (newline character).

### **Displaying Encrypted Code**
```c
printf("\nEncrypted Code: %s\n", word);
printf("\n____________________________________________________________\n\n");
```
* ✅ Prints the encrypted word.

### **5. Decryption Function**
```c
void decryption() {
    char word[500];
    printf("\n____________________________________________________________\n");
    printf("\n\t\tC O D E  T O  W O R D  ");
    printf("\n____________________________________________________________\n");
    printf("\nEnter the encrypted code for decryption: ");
    fgets(word, sizeof(word), stdin);
```
* ✅ Similar to encryption(), but asks for encrypted input.

### **Decrypting the Code**
```c
for (int i = 0; word[i] != '\0'; i++) {
    if (word[i] != '\n') // Avoid modifying newline character
        word[i] = word[i] - 5;
}
```

* ✅ Loops through each character.
* ✅ Decrypts by shifting each character backward by 5 (word[i] - 5).

### **Displaying Decrypted Word**
```c
printf("\nDecrypted Word: %s\n", word);
printf("\n____________________________________________________________\n\n");
```
* ✅ Prints the original word after decryption.
<hr>
<hr>

<h3>6. Key Features of This Program</h3>

* ✅ Simple Character Shift Encryption – Uses a Caesar Cipher (+5 shift).
* ✅ Works for Any String – Encrypts full sentences too.
* ✅ Proper Console Formatting – Uses space(40), system("clear").
* ✅ Safe Input Handling – Uses fgets() instead of gets().


<h3>7. Possible Improvements</h3>

 * Enhance Encryption Logic:<br>
✅ Instead of a fixed shift of 5, use a user-defined key.<br>
✅ Example: Ask the user for a shift value.

 * Support for Special Characters:<br>
✅ The current logic encrypts all characters, including spaces.<br>
✅ Could preserve spaces and punctuation.

* Cross-Platform Compatibility:<br>
✅ system("clear") works in Linux/macOS, but Windows requires system("cls").<br>
✅ Use the following code for cross-platform support:

```c
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
```


<h3>8. Final Thoughts</h3>

```
This is a basic encryption/decryption program using a Caesar Cipher (+5 shift).
It’s well-structured with formatting and user interaction.
With some improvements, it could become a more advanced encryption tool.
```

```
📌 Author: Sarwon Jung Kunwar
📌 Language: C
📌 Purpose: Encryption & Decryption of Text
```

