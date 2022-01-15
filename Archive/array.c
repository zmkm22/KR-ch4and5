#include <stdio.h>

int main(void)
{
    /* in c array is {} not like [...] as in Python*/
    int a[10] = {1,2,4,5}; // when initialized array is shorter than allocated memory in definition, remainding are set to zero 
    int *p = a;
    for (int j = 0; j < 10; ++j)
        printf("%d\n", *p++);
    printf("%p\n", a);
    // we cannot do a = {...} because a is an address, so we may not assign an array to it!
}
