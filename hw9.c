#include <stdio.h>
#include <ctype.h>

int main() {
    char inputString[1000];
    printf("Input> ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("Output> ");
    for (int i = 0; inputString[i] != '\0'; ++i) {
        if (isupper(inputString[i]));
            printf("%c", tolower(inputString[i]));
        } else if (islower(inputString[i])) {
            printf("%c", toupper(inputString[i]));
        } else {
            printf("%c", inputString[i]);
        }
    }

    return 0;
}
