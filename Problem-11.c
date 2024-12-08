#include <stdio.h>
void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        printf("%d ", n);
    }
}
    int main() {
    int N;

    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("Numbers from 1 to %d: ", N);
    printNumbers(N);

    return 0;
}
