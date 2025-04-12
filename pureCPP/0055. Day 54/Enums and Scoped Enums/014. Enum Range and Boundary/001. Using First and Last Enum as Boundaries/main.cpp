#include <iostream>

enum class Fruit {
    Apple,
    Banana,
    Orange,
    Count // Sentinel value
};

int main() {
    for (int i = 0; i < static_cast<int>(Fruit::Count); ++i) {
        std::cout << "Fruit index: " << i << "\n";
    }
}
