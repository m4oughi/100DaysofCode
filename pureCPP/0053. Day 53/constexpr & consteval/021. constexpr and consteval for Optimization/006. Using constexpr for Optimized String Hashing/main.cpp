#include <iostream>

// Compile-time string hashing using FNV-1a algorithm
constexpr uint32_t fnv1aHash(const char* str, uint32_t hash = 2166136261U) {
    return (*str ? fnv1aHash(str + 1, (hash ^ *str) * 16777619U) : hash);
}

int main() {
    constexpr uint32_t hash1 = fnv1aHash("hello");
    constexpr uint32_t hash2 = fnv1aHash("world");

    std::cout << "Hash of 'hello': " << hash1 << '\n';
    std::cout << "Hash of 'world': " << hash2 << '\n';
}
