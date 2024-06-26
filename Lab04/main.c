/* main.c simple program to test assembler program */

#include <stdio.h>

extern long long int my_mul(long long int a, long long int b);
extern long long int fact(long long int n);

int main(void)
{
    long long int a = my_mul(3, 5);
    printf("Result of my_mul(3, 5) = %lld\n", a);
    long long int n = 3;
    long long int b = fact(n);
    printf("Result of fact(%lld) = %lld\n", n, b);
    return 0;
}
