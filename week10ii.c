#include <stdio.h>

int main()
{
    char str[100];
    char *ch;

    printf("Please Enter String to print = ");
    fgets(str, sizeof str, stdin);

    ch = str;
    printf("\n Printing Given String using Pointers\n");
    while(*ch != '\0')
    {
        printf("%c", *ch++);
    }
}