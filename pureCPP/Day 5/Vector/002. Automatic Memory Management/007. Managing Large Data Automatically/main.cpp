#include <iostream>
#include <vector>

int main() {
    std::vector<int> largeVector;

    // Reserve memory to avoid frequent reallocations
    largeVector.reserve(1000000);

    for (int i = 0; i < 1000000; ++i) {
        largeVector.push_back(i);  // Memory is managed automatically
    }

    // The large vector is automatically cleaned up when it goes out of scope

    return 0;
}
