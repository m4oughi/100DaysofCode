#include <stdio.h>

#pragma pack(push, 1)  // Align struct members on 1-byte boundaries

struct PackedData {
    char c;
    int i;
};

#pragma pack(pop)

int main() {
    printf("Size of PackedData: %lu bytes\n", sizeof(struct PackedData));
    return 0;
}
