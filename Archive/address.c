#include <stdio.h>

int factorial(int n);

int main(void)
{
    int a;
    a = 991030;
    printf("The address of a = %d is %p\n", *&a, &a); // how do we store the pointer in a variable?

    int n;
    n = 4;
    printf("%d! = %d\n", n, factorial(n));
}

// recursion
int factorial(int n)
{
    if (n < 0)
        printf("please give non negative number to compute the factorial!\n");
    else if (n == 0)
        return 1;
    return n * factorial(n-1);  // a function can call itself!
}
