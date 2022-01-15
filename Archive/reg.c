#include <stdio.h>

int f(register int a);

int main(void)
{
    register float pi = 3.14;
    printf("%d\n", f(991030));
    printf("%f\n", pi);
    printf("%s\n", __TIME__);
    return 0;
}

int f(register int a)
{
    // reistered variables can not be addressed
    return a;
}