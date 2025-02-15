#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: To make a modern periodic table.

void periodicTable();
void search();

int main() {
    int opt, i;

    printf("\n\n______________________________________________________________\n");
    printf("\n\t\t    Modern Periodic Table");
    printf("\n______________________________________________________________\n");

    for (i = 0; i <= 5; i++) {
        printf("\n");
        if (i == 3) {
            printf("\t  1. Periodic table\t2. Search periodic table\n");
        }
    }
    printf("\n______________________________________________________________\n");
    printf("\n\t\t       Choose the option");
    printf("\n______________________________________________________________\n");
    printf("\nEnter: ");
    
    scanf("%d", &opt);

    // Logic
    switch (opt) {
        case 1:
            periodicTable();
            printf("\n\n");
            break;
        case 2:
            search();
            printf("\n\n");
            break;
        default:
            printf("Invalid option! Please enter 1 or 2.\n");
    }

    return 0;
}

void periodicTable() {
    printf("\nThe periodic table is below:\n\n");

    printf("1. Hydrogen\n");
    printf("2. Helium\n");
    printf("3. Lithium\n");
    printf("4. Beryllium\n");
    printf("5. Boron\n");
    printf("6. Carbon\n");
    printf("7. Nitrogen\n");
    printf("8. Oxygen\n");
    printf("9. Fluorine\n");
    printf("10. Neon\n");
    printf("11. Sodium\n");
    printf("12. Magnesium\n");
    printf("13. Aluminum\n");
    printf("14. Silicon\n");
    printf("15. Phosphorus\n");
    printf("16. Sulfur\n");
    printf("17. Chlorine\n");
    printf("18. Argon\n");
    printf("19. Potassium\n");
    printf("20. Calcium\n");
}

void search() {
    int op;

    printf("\n\nEnter the element number (1-20): ");
    scanf("%d", &op);
    printf("\n\n");

    switch (op) {
        case 1:
            printf("Element Position: 1\nElement Name: Hydrogen\nSymbol: H\nBlock: s\nAtomic Number: 1\nAtomic Mass: 1.008\n");
            break;
        case 2:
            printf("Element Position: 2\nElement Name: Helium\nSymbol: He\nBlock: p\nAtomic Number: 2\nAtomic Mass: 4.003\n");
            break;
        case 3:
            printf("Element Position: 3\nElement Name: Lithium\nSymbol: Li\nBlock: s\nAtomic Number: 3\nAtomic Mass: 6.941\n");
            break;
        case 4:
            printf("Element Position: 4\nElement Name: Beryllium\nSymbol: Be\nBlock: s\nAtomic Number: 4\nAtomic Mass: 9.012\n");
            break;
        case 5:
            printf("Element Position: 5\nElement Name: Boron\nSymbol: B\nBlock: p\nAtomic Number: 5\nAtomic Mass: 10.811\n");
            break;
        case 6:
            printf("Element Position: 6\nElement Name: Carbon\nSymbol: C\nBlock: p\nAtomic Number: 6\nAtomic Mass: 12.011\n");
            break;
        case 7:
            printf("Element Position: 7\nElement Name: Nitrogen\nSymbol: N\nBlock: p\nAtomic Number: 7\nAtomic Mass: 14.007\n");
            break;
        case 8:
            printf("Element Position: 8\nElement Name: Oxygen\nSymbol: O\nBlock: p\nAtomic Number: 8\nAtomic Mass: 15.999\n");
            break;
        case 9:
            printf("Element Position: 9\nElement Name: Fluorine\nSymbol: F\nBlock: p\nAtomic Number: 9\nAtomic Mass: 18.998\n");
            break;
        case 10:
            printf("Element Position: 10\nElement Name: Neon\nSymbol: Ne\nBlock: p\nAtomic Number: 10\nAtomic Mass: 20.180\n");
            break;
        case 11:
            printf("Element Position: 11\nElement Name: Sodium\nSymbol: Na\nBlock: s\nAtomic Number: 11\nAtomic Mass: 22.990\n");
            break;
        case 12:
            printf("Element Position: 12\nElement Name: Magnesium\nSymbol: Mg\nBlock: s\nAtomic Number: 12\nAtomic Mass: 24.305\n");
            break;
        case 13:
            printf("Element Position: 13\nElement Name: Aluminum\nSymbol: Al\nBlock: p\nAtomic Number: 13\nAtomic Mass: 26.982\n");
            break;
        case 14:
            printf("Element Position: 14\nElement Name: Silicon\nSymbol: Si\nBlock: p\nAtomic Number: 14\nAtomic Mass: 28.085\n");
            break;
        case 15:
            printf("Element Position: 15\nElement Name: Phosphorus\nSymbol: P\nBlock: p\nAtomic Number: 15\nAtomic Mass: 30.974\n");
            break;
        case 16:
            printf("Element Position: 16\nElement Name: Sulfur\nSymbol: S\nBlock: p\nAtomic Number: 16\nAtomic Mass: 32.06\n");
            break;
        case 17:
            printf("Element Position: 17\nElement Name: Chlorine\nSymbol: Cl\nBlock: p\nAtomic Number: 17\nAtomic Mass: 35.453\n");
            break;
        case 18:
            printf("Element Position: 18\nElement Name: Argon\nSymbol: Ar\nBlock: p\nAtomic Number: 18\nAtomic Mass: 39.948\n");
            break;
        case 19:
            printf("Element Position: 19\nElement Name: Potassium\nSymbol: K\nBlock: s\nAtomic Number: 19\nAtomic Mass: 39.098\n");
            break;
        case 20:
            printf("Element Position: 20\nElement Name: Calcium\nSymbol: Ca\nBlock: s\nAtomic Number: 20\nAtomic Mass: 40.078\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 20.\n");
    }
}
