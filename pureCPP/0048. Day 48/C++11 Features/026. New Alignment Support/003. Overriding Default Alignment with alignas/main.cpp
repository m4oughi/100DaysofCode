#include <iostream>

struct alignas(32) CustomAligned {
    double data[4];
};

int main() {
    std::cout << "Alignment of CustomAligned: " << alignof(CustomAligned) << '\n';
    return 0;
}
