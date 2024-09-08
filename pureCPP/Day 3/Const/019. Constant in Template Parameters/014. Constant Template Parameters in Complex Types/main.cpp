#include <iostream>
#include <array>

template <int N>
class ArrayWrapper {
public:
    std::array<int, N> data;

    ArrayWrapper() {
        for (int i = 0; i < N; ++i) {
            data[i] = i;
        }
    }

    void printArray() const {
        for (const auto& element : data) {
            std::cout << element << " "; // Prints array elements
        }
        std::cout << std::endl;
    }
};

int main() {
    ArrayWrapper<5> obj;
    obj.printArray(); // Prints 0 1 2 3 4
}
