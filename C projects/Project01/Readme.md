# Age Calculation and Date Conversion Program

## Description
This C program provides a simple user interface to:
1. **Calculate the age** based on the user's date of birth (DOB) in either **Bikram Sambat (BS)** or **Gregorian (AD)** calendar.
2. **Convert dates** between the **BS** and **AD** calendars.
3. **Allow users** to select options for these calculations in a loop, with the ability to exit at any time.

## Features
- **Age Calculation:**
  - Calculate age based on either **BS** or **AD** dates.
- **BS to AD Conversion:**
  - Convert a **BS date** to **AD date** based on the 56/57-year difference.
- **AD to BS Conversion:**
  - Convert an **AD date** to a **BS date** using the same year difference.
- **Menu-based user interface** for easy navigation between different options.

## Installation
1. Install a C compiler like **GCC**, or use an IDE such as **Code::Blocks** or **DevC++**.
2. Copy the provided code into a `.c` file (e.g., `age_calculator.c`).
3. Compile and run the program in your chosen C compiler or IDE.

## Usage
- Upon execution, the program will display a menu with the following options:
  1. **Calculate age** (based on **BS** or **AD** DOB).
  2. **Convert BS to AD**.
  3. **Convert AD to BS**.
  4. **Exit the program**.
- The user can select the desired option and follow the on-screen prompts to perform the calculation.

## Code
```c
#include<stdio.h>
#include<conio.h>

// Author: Sarwon Jung Kunwar
// Purpose: Calculate age, BS to AD, AD to BS conversion.

void age();
void bstoad();
void adtobs();

int main(){
    char ch;
    int opt;
    
    do {
        printf("\n\n-------------------------------------------------\n");
        printf("\t\tAGE calculation");
        printf("\n-------------------------------------------------\n");
        printf("\n\n\t1.age calculation\t 2.BS to AD\n\n\t3.AD to BS\t\t 4.Exit\n\n");
        printf("Enter : ");
        fflush(stdin);
        scanf("%d",&opt);
        
        if(opt <= 0 || opt >= 5){
            printf("\n\n\t\tWrong input !!!\n\n\n");
            ch = 'y';
        }
        
        switch(opt){
            case 1: age(); break;
            case 2: bstoad(); break;
            case 3: adtobs(); break;
            case 4: printf("process end !!!\n\n"); break;
        }

        printf("\n\nPRESS [ y/n ] : ");
        fflush(stdin);
        scanf("%c",&ch);
    } while(opt != 4);

    return 0;
}

// Age Calculation function
void age() {
    int age, dob, op;
    printf("\n\nChose the method\n\n");
    printf("1. Age calculation by BS\n2. Age calculation by AD.");
    printf("\n\nEnter : ");
    scanf("%d",&op);

    switch(op) {
        case 1:
            printf("\n\nEnter the date of birth in BS: ");
            fflush(stdin);
            scanf("%d", &dob);
            age = 2080 - dob;
            printf("\nYour age is: %d\n", age);
            break;

        case 2:
            printf("\n\nEnter the date of birth in AD: ");
            fflush(stdin);
            scanf("%d", &dob);
            age = 2023 - dob;
            printf("\nYour age is: %d\n", age);
            break;
    }
}

// BS to AD Conversion
void bstoad() {
    int dob, year;
    printf("\nEnter the date of birth in BS: ");
    scanf("%d", &dob);
    year = dob - 56;
    printf("\nBS Date of birth: [ %d ]", dob);
    printf("\nAD Date of birth: According to %d, Your AD is %d.\n", dob, year);
}

// AD to BS Conversion
void adtobs() {
    int dob, year;
    printf("\nEnter the date of birth in AD: ");
    scanf("%d", &dob);
    year = dob + 56;
    printf("\nAD Date of birth: [ %d ]", dob);
    printf("\nBS Date of birth: According to %d, Your BS is %d.\n", dob, year);
}


```

## How It Works:
The program continuously runs in a loop, providing a menu for users to select the desired option. The user can:

- **Calculate their age** based on a **BS** or **AD** date of birth.
- **Convert dates** between the **BS** and **AD** calendar systems.
- **Select options** from the menu to:
  - **Option 1:** Calculate age by BS or AD DOB.
  - **Option 2:** Convert a BS date to AD.
  - **Option 3:** Convert an AD date to BS.
  - **Option 4:** Exit the program.

The program will keep asking the user if they want to perform another calculation until they choose to exit by selecting **Option 4**.
