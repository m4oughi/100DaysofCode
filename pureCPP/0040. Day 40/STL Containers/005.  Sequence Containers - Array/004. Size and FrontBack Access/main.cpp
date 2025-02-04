#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {5, 10, 15, 20, 25};

    std::cout << "Size: " << arr.size() << "\n";
    std::cout << "First Element: " << arr.front() << "\n";
    std::cout << "Last Element: " << arr.back() << "\n";

    return 0;
}
