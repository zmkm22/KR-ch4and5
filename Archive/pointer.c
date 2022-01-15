#include <stdio.h>

// function (char *) says the function takes a pointer to an int
int main(void)
{
    int *p, a, Array[10]; // this says the thing stored in pointer p is an int

    a = 1;
    p = &a; // p points to a, thus the integer can be accessed by the variable name a and the pointer p
    p = & Array[0]; // now the pointer points to an array

    for (a = 0; a < 10; ++a)
        Array[a] = a;

    int item;

    printf("The third item is %d\n", *(p+2)); // out 2 because *(p+2) means the object stored at 2 away from address p
    printf("What is an array? %p\n", Array); 
    /* Array is a pointer!! Although the array name is not a variable, so though we can acess its value, 
    we cannot operate on it such as Array++ or Array += 3
    */printf("What is array item nine? %d\n", *(Array+9)); // 9
    printf("What is array item -10? %d\n", *(Array-10)); 
    printf("What is array item -10? %d\n", Array[-10]);

    // int func(char *) is a function that can take an array "hello" an arrary name Array or what is `equivalent' the ptr to the begining of the arrary

    // To declare an array we can do 
    int List[10];
    // or equivalently 
    int *list;

    // int func(char a[]) or equivalently int func(char *arr)

    size_t k;
    k = sizeof(int);

    char *str = "hello world"; // assings to str the address of h

    printf("%p\n",str+10);
    
    return 0;
}