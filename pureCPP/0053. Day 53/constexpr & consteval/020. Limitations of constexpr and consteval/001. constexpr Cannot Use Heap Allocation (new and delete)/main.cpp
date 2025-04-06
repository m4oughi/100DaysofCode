#include <iostream>

constexpr int* allocateMemory() { 
    // return new int(42);  // ❌ Compilation error: constexpr cannot use new/delete
    return nullptr;  // ✅ Workaround
}

int main() {
    constexpr int* ptr = allocateMemory(); 
    std::cout << (ptr == nullptr ? "Heap allocation not allowed in constexpr" : "Allocated") << '\n';
}
