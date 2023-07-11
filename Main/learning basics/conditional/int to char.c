#include <stdio.h>

void printNumber(int number);

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printNumber(number);

    return 0;
}

void printNumber(int number) {
    if (number == 0) {
        printf("zero");
    } else if (number < 0) {
        printf("minus ");
        printNumber(-number);
    } else if (number < 10) {
        const char *ones[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        printf("%s", ones[number - 1]);
    } else if (number == 10) {
        printf("ten");
    } else if (number < 20) {
        const char *teens[] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        printf("%s", teens[number - 11]);
    } else if (number < 100) {
        const char *tens[] = {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
        printf("%s", tens[number / 10 - 1]);
        if (number % 10 != 0) {
            printf("-");
            printNumber(number % 10);
        }
    } else if (number < 1000) {
        printNumber(number / 100);
        printf(" hundred ");
        if (number % 100 != 0) {
            printNumber(number % 100);
        }
    } else if (number < 1000000) {
        printNumber(number / 1000);
        printf(" thousand ");
        if (number % 1000 != 0) {
            printNumber(number % 1000);
        }
    } else if (number < 1000000000) {
        printNumber(number / 1000000);
        printf(" million ");
        if (number % 1000000 != 0) {
            printNumber(number % 1000000);
        }
    } else {
        printf("Number out of range");
    }
}
