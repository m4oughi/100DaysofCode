#include <stdio.h>

struct UnpackedData {
    char c;
    int i;
};

#pragma pack(push, 2)  // Align on 2-byte boundaries
struct PackedData2 {
    char c;
    int i;
};
#pragma pack(pop)

#pragma pack(push, 4)  // Align on 4-byte boundaries
struct PackedData4 {
    char c;
    int i;
};
#pragma pack(pop)

int main() {
    printf("Size of UnpackedData: %lu bytes\n", sizeof(struct UnpackedData));
    printf("Size of PackedData2: %lu bytes\n", sizeof(struct PackedData2));
    printf("Size of PackedData4: %lu bytes\n", sizeof(struct PackedData4));
    return 0;
}
