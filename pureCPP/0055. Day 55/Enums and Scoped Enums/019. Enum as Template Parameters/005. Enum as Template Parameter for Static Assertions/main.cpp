#include <iostream>
#include <type_traits>

enum class Version {
    V1,
    V2
};

template <Version V>
void checkVersion() {
    if constexpr (V == Version::V1) {
        std::cout << "Version 1\n";
    } else if constexpr (V == Version::V2) {
        std::cout << "Version 2\n";
    }
}

template <Version V>
void staticAssertVersion() {
    static_assert(V != Version::V1, "Version 1 is not supported");
    checkVersion<V>();
}

int main() {
    staticAssertVersion<Version::V2>(); // Output: Version 2
    // staticAssertVersion<Version::V1>(); // This will cause a static assert failure
    return 0;
}
