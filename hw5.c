#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("Binary representation: 0");
        return;
    }
    
    char binary[32]; // 배열 크기는 32로 설정 (32비트 정수 기준)
    int i = 0;
    
    while (n > 0) {
        binary[i++] = (n % 2) + '0';
        n /= 2;
    }
    
    printf("Binary representation: ");
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", binary[j]);
    }
}

int main() {
    int decimal_number;
    
    printf("Please enter a number: ");
    scanf("%d", &decimal_number);
    
    if (decimal_number < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        decimalToBinary(decimal_number);
    }
    
    return 0;
}
