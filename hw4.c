#include <stdio.h>
#include <stdbool.h>

bool is_prime(int number) {
    if (number <= 1) {
        return false;
    }
    if (number <= 3) {
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }
    int i = 5;
    while (i * i <= number) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
}

int main() {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("It is a prime number.\n");
    } else {
        printf("It is not a prime number.\n");
    }

    return 0;
}
