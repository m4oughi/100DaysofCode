#include <iostream>
#include <vector>
#include <algorithm>

struct FastSwappable {
    std::vector<int> data;

    FastSwappable() = default;
    FastSwappable(FastSwappable&&) noexcept = default;
    FastSwappable& operator=(FastSwappable&&) noexcept = default;
};

int main() {
    FastSwappable a, b;
    std::swap(a, b); // Optimized swap due to noexcept move operations
    return 0;
}
