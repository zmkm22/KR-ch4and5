#include <stdio.h>
#include "hdr.h"

/*
extern int piu;
// error not found because piu is private
*/

extern int a;

int main(void){

    // printf("%d\n",piu);
    printf("%d\n",a);
    constant();

    return 0;
}