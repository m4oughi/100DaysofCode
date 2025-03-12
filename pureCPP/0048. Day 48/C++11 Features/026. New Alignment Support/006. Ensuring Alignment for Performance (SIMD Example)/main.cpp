#include <iostream>
#include <immintrin.h> // For SIMD operations

struct alignas(32) SIMDVector {
    float data[8];
};

int main() {
    SIMDVector vec;
    std::cout << "SIMDVector is aligned to: " << alignof(SIMDVector) << '\n';
    return 0;
}
