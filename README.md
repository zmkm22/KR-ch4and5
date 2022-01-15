# Combined Ch 4 and 5

> will review pointers next time

To build a program contained in multiple files: the variables can have exactly one defintion (memory allocation) among the files. Files not containing the variable may acesses it my using the extern keyword before using the variable. 

The  `extern` keyword may also be used in the same file a variable is defined: it is used to acess the variable before the definition.