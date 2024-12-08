#include <stdio.h>
#include <string.h>
int main()
{
    char str[300];
    int count = 0, i = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    while (str[i] != '\0')
    {
        if ((str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')))
        {
            count++;
        }
        i++;
    }
    printf("Number of words= %d\n", count);
    return 0;
}
