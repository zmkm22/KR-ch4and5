#include <stdio.h>

void foo_bar( void );

int main( void )
{
        foo_bar();
        foo_bar();
        foo_bar();
 return 0;
}
void foo_bar( void )
{
        static counter = 0;     // the static variable is intialized the first time the block is entered
        printf("counter is %d\n", counter);
        counter++;
}