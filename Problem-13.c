#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("Enter the first string:\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string:\n");
    fgets(str2, sizeof(str2), stdin);
    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    printf("Concatenated string: %s", str1);

    return 0;
}
