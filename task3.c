#include <stdio.h>
#include <stddef.h>

struct Unpacked {
    char a;
    int b;
    double c;
};

#pragma pack(push,1)
struct Packed {
    char a;
    int b;
    double c;
};
#pragma pack(pop)

int main() {
    printf("=== Assignment 3: #pragma pack ===\n");

    printf("\nWithout packing:\n");
    printf("sizeof(Unpacked) = %zu\n", sizeof(struct Unpacked));
    printf("offset a = %zu\n", offsetof(struct Unpacked, a));
    printf("offset b = %zu\n", offsetof(struct Unpacked, b));
    printf("offset c = %zu\n", offsetof(struct Unpacked, c));

    printf("\nWith #pragma pack(1):\n");
    printf("sizeof(Packed) = %zu\n", sizeof(struct Packed));
    printf("offset a = %zu\n", offsetof(struct Packed, a));
    printf("offset b = %zu\n", offsetof(struct Packed, b));
    printf("offset c = %zu\n", offsetof(struct Packed, c));

    return 0;
}
