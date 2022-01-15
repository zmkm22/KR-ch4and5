#include <stdio.h>

int main(void)
{
    char *p, *str = "012345";
    p = str + 5; // *p is 5
    printf("%c\n", *--p);
    printf("%c\n", *p++);
    printf("%c\n", *p);

}