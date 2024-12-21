/* 
PROBLEM: Define a structure to represent an element in the periodic table with details like atomic number, name, chemical symbol, class, atomic weight, and number of electrons in each shell. Implement I/O functions to scan and display element details.

ANALYSIS: To solve this problem, we need to define a structure `element_t` to store element details and implement input-output functions.

DATA REQUIREMENTS: 
Problem Inputs: 
- int atomic_number;  
- char name[20];  
- char symbol[5];  
- char class[20];  
- float atomic_weight;  
- int electrons[7];  

Problem Outputs: 
- Display all details of an element.

DESIGN: 
INITIAL ALGORITHM: 
Step 1. Define `element_t` structure with atomic number, name, symbol, class, atomic weight, and electrons array.
Step 2. Implement `scan_element` function to input data.
Step 3. Implement `print_element` function to display data.
Step 4. Test the program with sample inputs.

IMPLEMENTATION: 
*/
#include <stdio.h>

typedef struct {
    int atomic_number;
    char name[20];
    char symbol[5];
    char class[20];
    float atomic_weight;
    int electrons[7];  // Number of electrons in each shell
} element_t;

void scan_element(element_t *element) {
    printf("Enter atomic number: ");
    scanf("%d", &element->atomic_number);
    printf("Enter name: ");
    scanf("%s", element->name);
    printf("Enter chemical symbol: ");
    scanf("%s", element->symbol);
    printf("Enter class: ");
    scanf("%s", element->class);
    printf("Enter atomic weight: ");
    scanf("%f", &element->atomic_weight);
    printf("Enter electrons in 7 shells: ");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &element->electrons[i]);
    }
}

void print_element(const element_t *element) {
    printf("Atomic Number: %d\n", element->atomic_number);
    printf("Name: %s\n", element->name);
    printf("Symbol: %s\n", element->symbol);
    printf("Class: %s\n", element->class);
    printf("Atomic Weight: %.4f\n", element->atomic_weight);
    printf("Electrons in shells: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", element->electrons[i]);
    }
    printf("\n");
}

int main() {
    element_t sodium;

    printf("Enter details for an element:\n");
    scan_element(&sodium);

    printf("\nElement Details:\n");
    print_element(&sodium);

    return 0;
}
