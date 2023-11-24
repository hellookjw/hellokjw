#include <stdio.h>
#include <math.h>

double calculateSD(double arr[], int n);

int main() {
    double numbers[5];

    // 5개의 실수 입력 받기
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%lf", &numbers[i]);
    }

    printf("Standard Deviation = %.3lf\n", calculateSD(numbers, 5));

    return 0;
}

double calculateSD(double arr[], int n) {
    double sum = 0.0, mean, standardDeviation = 0.0;

    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    mean = sum / n;

    for (int i = 0; i < n; ++i) {
        standardDeviation += pow(arr[i] - mean, 2);
    }
    standardDeviation = sqrt(standardDeviation / n);

    return standardDeviation;
}
