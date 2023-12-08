#include <stdio.h>

// Define the structure for city information
struct City {
    char name[50];
    char country[50];
    int population;
};

int main() {
    // Declare an array of City structures to store information for three cities
    struct City cities[3];

    // Input information for three cities
    for (int i = 0; i < 3; ++i) {
        printf("Input information for City %d:\n", i + 1);
        printf("Name> ");
        scanf("%s", cities[i].name);
        printf("Country> ");
        scanf("%s", cities[i].country);
        printf("Population> ");
        scanf("%d", &cities[i].population);
    }

    // Print the information for three cities
    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d. %s in %s with a population of %d people\n", i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
