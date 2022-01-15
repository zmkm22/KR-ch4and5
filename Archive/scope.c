#include <stdio.h>

int main(void) {
    int a;
    {
        float a;  // no error, because each the braces enter a new scope
        printf("%f\n",a);
    }    

    return 0;
}