#include <iostream>

template <typename T>
class Generic {
public:
    void process(T value) {
        std::cout << "Processing: " << value << std::endl;
    }
};

// Specialization for `void` type is deleted
template <>
class Generic<void> {
public:
    void process(void) = delete;
};

int main() {
    Generic<int> g1;
    g1.process(42); // Allowed

    // Generic<void> g2;
    // g2.process(); // Error: process() is deleted for void type
    return 0;
}
