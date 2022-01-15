#include <stdio.h>

int main(void)
{
    char *p;
    p = "hello world";
    printf("%s\n", p);
    return 0;
}

/*
for (int i = 0; i < 26; ++i)
        *(p+i) = (char) 'a' + i;   //printf("%c",i + 'a');
    *(p + 27) = '\0';
*/