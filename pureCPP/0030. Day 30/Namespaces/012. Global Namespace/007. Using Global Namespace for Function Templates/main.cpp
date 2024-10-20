#include <iostream>

template <typename T>
void print(T value) {
    std::cout << "Global template print: " << value << std::endl;
}

namespace Utility {
    template <typename T>
    void print(T value) {
        std::cout << "Utility template print: " << value << std::endl;
    }
}

int main() {
    print(10);               // Calls global template print
    Utility::print(20);       // Calls Utility template print
    return 0;
}
