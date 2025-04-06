#include <iostream>

consteval int generateID() {
    return __LINE__;  // Unique ID at compile-time
}

int main() {
    constexpr int id1 = generateID();
    constexpr int id2 = generateID();
    
    std::cout << "ID1: " << id1 << ", ID2: " << id2 << '\n';
}
