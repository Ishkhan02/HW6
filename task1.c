#include <stdio.h>

int main(void) {
    int i = 42;
    char ch = 'A';
    double d = 3.14159;
    short s = 7;

    printf("=== Assignment 1: Data Alignment ===\n");
    printf("Sizes:\n");
    printf("  int    = %zu\n", sizeof(int));
    printf("  char   = %zu\n", sizeof(char));
    printf("  double = %zu\n", sizeof(double));
    printf("  short  = %zu\n", sizeof(short));

    printf("\nAddresses:\n");
    printf("  &i  = %p\n", (void*)&i);
    printf("  &ch = %p\n", (void*)&ch);
    printf("  &d  = %p\n", (void*)&d);
    printf("  &s  = %p\n", (void*)&s);

    return 0;
}
