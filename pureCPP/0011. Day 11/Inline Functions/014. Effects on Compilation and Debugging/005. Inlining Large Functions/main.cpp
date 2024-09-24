#include <iostream>
#include <vector>

// Large inline function that is not suitable for inlining
inline void largeFunction(std::vector<int> &data) {
    for (int &value : data) {
        value = value * value;
    }
}

int main() {
    std::vector<int> data(1000, 2);
    largeFunction(data);
    std::cout << "Data processed." << std::endl;
    return 0;
}
