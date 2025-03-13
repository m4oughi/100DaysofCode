#include <iostream>
#include <utility> // For std::exchange

int main() {
    int x = 10;
    int old_value = std::exchange(x, 20); // Assigns 20 to x and returns the old value (10)

    std::cout << "New x: " << x << "\n";
    std::cout << "Old x: " << old_value << "\n";

    return 0;
}
