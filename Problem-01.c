#include<stdio.h>
int main () {
    int A;
    printf("Enter a number");
    scanf("%d", &A);
    if(A&1) {
        printf("ODD\n");
    }
    else {
        printf("EVEN\n");
    }

    return 0;

}


