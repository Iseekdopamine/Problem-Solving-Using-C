#include <stdio.h>
#include <limits.h>

int main() {
    printf("Size of int = %zu bytes\n", sizeof(int));

    printf("Signed int range: %d to %d\n", INT_MIN, INT_MAX);
    printf("Unsigned int max: %u\n", UINT_MAX);

    int a = -5;
    unsigned int b = 5;

    printf("a = %d\n", a);
    printf("b = %u\n", b);

    return 0;
}
