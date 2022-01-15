#include <stdio.h>

int main(int argc, char *argv[])   // argument vector
{
    char *List[3];
    List[0] = "apples";
    List[1] = "bears";
    List[2] = "canteberries";
    printf("how many arguments? %d %s\n", argc, argv[0]);

    for (int l = 0; l < 3; ++l)
        printf("%s,\n", List[l]);
}