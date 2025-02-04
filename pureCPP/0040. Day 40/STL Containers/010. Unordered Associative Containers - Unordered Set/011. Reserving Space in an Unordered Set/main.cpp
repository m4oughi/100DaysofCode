#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset;
    uset.reserve(100);  // Preallocates space for 100 elements

    for (int i = 0; i < 10; ++i) {
        uset.insert(i);
    }

    std::cout << "Size: " << uset.size() << "\n";

    return 0;
}
