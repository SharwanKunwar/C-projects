# C Projects Repository

Welcome to my C Projects repository! This repository contains various C programs that I have developed. I am excited to share my projects with you and will continue to add more projects in the future. Below, I will describe my first project, **Age Calculation**. Stay tuned for upcoming projects!

## Projects 01 :

### 1. **Age Calculation and Date Conversion Program**

This is my first project in this repository. It allows users to:

- Calculate their age based on their date of birth (DOB) in either the **Bikram Sambat (BS)** or **Gregorian (AD)** calendar.
- Convert a BS date to an AD date and vice versa.

#### Features:
- **Age Calculation**:
  - Calculate age based on a BS or AD date of birth.
- **BS to AD Conversion**:
  - Convert a BS date to an AD date using a year difference of 56 or 57 years.
- **AD to BS Conversion**:
  - Convert an AD date to a BS date using the same year difference.
- A menu-based user interface for easy navigation between options.

#### How It Looks:
When you run the program, it presents a clear, menu-driven interface with the following options:
1. **Age calculation**: Allows you to input your date of birth and calculates your age in either the BS or AD calendar.
2. **BS to AD conversion**: Convert your BS date of birth into the corresponding AD date.
3. **AD to BS conversion**: Convert your AD date of birth into the corresponding BS date.
4. **Exit**: End the program.



#### Code:
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
            case 4: printf("Process end !!!\n\n"); break;
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
    printf("\n\nChoose the method\n\n");
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


This simple, intuitive UI ensures that users can easily navigate through the program to perform the desired calculations. The program gives feedback at each step, helping users understand the conversion process and their calculated age.

#### Why It's Good:
- **Practical**: This program is useful for people who need to calculate their age or convert dates between BS and AD, especially in Nepal, where both calendars are in use.
- **User-Friendly**: The program is easy to understand and navigate, making it accessible to users with varying levels of experience with computers.
- **Educational**: It helps users learn about the differences between the BS and AD calendars and how to perform basic calculations.
- **Extendable**: The structure of the program is designed so that more features can be added in the future, such as more advanced date conversion or the ability to handle other date-related calculations.


<br><br>



## Installation

To run any of the programs in this repository, follow these steps:

1. Install a C compiler like GCC or use an IDE like Code::Blocks or DevC++.
2. Clone this repository or download the .c files.
3. Open the desired program in your C compiler/IDE.
4. Compile and run the program.

## Usage

Once you run the program, follow the on-screen prompts to interact with the program. Each program will guide you on what actions to take based on the options presented.

## Contributing

Feel free to fork this repository and contribute by submitting pull requests. I welcome suggestions and improvements to make these projects better.

## License

This project is licensed under the MIT License - see the LICENSE.md file for details.

Thank you for visiting my repository, and I hope you enjoy exploring these C projects!
This is your requested README.md with the exact data you provided, formatted and ready for use.


# Future Projects

I am excited to develop more projects like the Age Calculation program and continue improving my skills in C programming. Keep an eye out for new projects coming soon!