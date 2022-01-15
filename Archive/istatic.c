#include <stdio.h>

void call(void);
int * increment (void);

int main(void)
{
    int *ptr;

    ptr = increment();
    call();

    printf("%d\n", *ptr);
    return 0;
}

int * increment (void)
{
    static int a = 0;
    a++;
    printf("%d, %p\n", a, &a);

    return &a;
}

void call(void)
{
    increment();
    increment();
    increment();

}