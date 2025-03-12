#include <iostream>

struct MixedAlign {
    char a;
    alignas(16) double b;
    int c;
};

int main() {
    std::cout << "Alignment of MixedAlign: " << alignof(MixedAlign) << '\n';
    std::cout << "Offset of 'b': " << offsetof(MixedAlign, b) << '\n';
    return 0;
}
