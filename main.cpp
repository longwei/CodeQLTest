#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <climits>
#include <iostream>

int main(int argc, char **argv)
{
    int size1 = 5;
    int size2 = size1 + 5;
    char *dst = (char *)malloc(size1); // allocation size is 5 bytes
    char *src = (char *)malloc(size2); // allocation size is 10 bytes

    memcpy(dst, src, size1);

    int a = INT_MAX;
    int b = INT_MAX;
    int c = a * b;
    std::cout << c << std::endl;
    return 0;
}