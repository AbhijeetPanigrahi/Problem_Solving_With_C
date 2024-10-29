#include <stdio.h>



int main() {


    int piels, coors, bud, iron_city;
    // Get the initial inventory for each brand
    printf("Enter the initial inventory for Piels (ID 1): ");
    scanf("%d", &piels);
    printf("Enter the initial inventory for Coors (ID 2): ");
    scanf("%d", &coors);
    printf("Enter the initial inventory for Bud (ID 3): ");
    scanf("%d", &bud);
    printf("Enter the initial inventory for Iron City (ID 4): ");
    scanf("%d", &iron_city);

    int brand_id, amount;
    while (1) {
        // Get the transaction details
        printf("Enter transaction (brand_id amount) or -1 to finish: ");
        scanf("%d", &brand_id);
        if (brand_id == -1) {
            break;
        }
        scanf("%d", &amount);
        switch (brand_id) {
            case 1:
                piels += amount;
                break;
            case 2:
                coors += amount;
                break;
            case 3:
                bud += amount;
                break;
            case 4:
                iron_city += amount;
                break;
            default:
                printf("Invalid brand ID\n");
        }
    }
    // Display the final inventory
    printf("\nFinal Inventory:\n");
    printf("Piels (ID 1): %d cases\n", piels);
    printf("Coors (ID 2): %d cases\n", coors);
    printf("Bud (ID 3): %d cases\n", bud);
    printf("Iron City (ID 4): %d cases\n", iron_city);


    return 0;
}

