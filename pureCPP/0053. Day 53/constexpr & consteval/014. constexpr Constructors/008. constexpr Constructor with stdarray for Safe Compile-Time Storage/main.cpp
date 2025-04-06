#include <iostream>
#include <array>

class FixedArray {
public:
    constexpr FixedArray() : data{1, 2, 3, 4, 5} {}

    constexpr int get(int index) const { return data[index]; }

private:
    std::array<int, 5> data;
};

int main() {
    constexpr FixedArray fa;
    constexpr int value = fa.get(3);  // ✅ Compile-time access

    std::cout << "Value at index 3: " << value << '\n';
}
