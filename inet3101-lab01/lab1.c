#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void printRecords() {
    printf("\n\nYou have selected the Print all records function\n\n");
    printf(" 'Printed all records' \n\n");
}

void addRecords() {
    int num;
    char name[50];
    float size;
    char metric[50];
    float cost;

    printf("\nWhat is the part number?:\n");
    scanf("%d", &num);
    getchar(); // Consume newline left in buffer

    printf("\nWhat is the part name?\n");
    scanf("%s", name); // Read entire line

    printf("\nSize of part?\n");
    scanf("%f", &size);

    printf("\nWeight of part?(lbs)\n");
    scanf("%s", metric);

    printf("\nPrice of part?\n");
    scanf("%f", &cost);

    printf("\nYou Entered:\n");
    printf("Part number: %d\n", num);
    printf("Part name: %s\n", name);
    printf("Part size: %.2f\n", size);
    printf("Part metric: %s\n", metric);
    printf("Part cost: %.2f\n", cost);
}

void delRecords() {
    printf("\nYou have entered the delete last record function\n");
}

void printNumRecords() {
    printf("\nYou have entered the Print number of records function\n");
}

void printDataSize() {
    printf("\nYou have entered the Print database size function\n");
}

void printNumChanges(bool print) {
    static int change = 0;

    if (print) {
        printf("\nYou have changed the database %d times\n", change);
    } else {
        change++;
        printf("\n%d changes so far\n", change);
    }
}

int main() {
    int selection;

    printf("1. Print all records\n");
    printf("2. Add record\n");
    printf("3. Delete last record\n");
    printf("4. Display the number of records\n");
    printf("5. Print database size\n");
    printf("6. Print number of changes\n");
    printf("7. Exit\n\n");

    printf("Please enter your selection > ");
    scanf("%d", &selection);
    getchar(); // Consume newline left in buffer

    switch (selection) {
        case 1:
            printRecords();
            break;

        case 2:
            addRecords();
            break;

        case 3:
            delRecords();
            break;

        case 4:
            printNumRecords();
            break;

        case 5:
            printDataSize();
            break;

        case 6: {
            bool print;
            char user_input[2]; // Array to store user input

            printf("\nPrint the number of changes to the database (Type x)\nor\n");
            printf("Add one to the number of changes to the database (Type y)\n");
            scanf("%s", user_input);

            if (strcmp(user_input, "x") == 0) {
                print = true;
            } else {
                print = false;
            }

            printNumChanges(print);
            break;
        }

        case 7:
            printf("\nExiting...\n");
            break;

    }

    return 0;
}
