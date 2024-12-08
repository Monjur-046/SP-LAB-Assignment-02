#include <stdio.h>
int main() {
    int n, fib1 = 0, fib2 = 1, fib3;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        printf("%d ", fib1);
        fib3 = fib1 + fib2;
        fib1= fib2;
        fib2 = fib3;
    }
    printf("\n");
    return 0;
}
