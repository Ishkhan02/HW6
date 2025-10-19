#include <stdio.h>
#include <stddef.h>

struct S1 {
    char a;
    int b;
    double c;
};

struct S2 {
    double c;
    int b;
    char a;
};

int main() {
    struct S1 s1;
    struct S2 s2;

    printf("=== Assignment 2: Struct Padding ===\n");

    printf("\nStruct S1 { char a; int b; double c; }\n");
    printf("sizeof(S1) = %zu\n", sizeof(struct S1));
    printf("offset a = %zu\n", offsetof(struct S1, a));
    printf("offset b = %zu\n", offsetof(struct S1, b));
    printf("offset c = %zu\n", offsetof(struct S1, c));

    printf("\nStruct S2 { double c; int b; char a; }\n");
    printf("sizeof(S2) = %zu\n", sizeof(struct S2));
    printf("offset c = %zu\n", offsetof(struct S2, c));
    printf("offset b = %zu\n", offsetof(struct S2, b));
    printf("offset a = %zu\n", offsetof(struct S2, a));

    return 0;
}
