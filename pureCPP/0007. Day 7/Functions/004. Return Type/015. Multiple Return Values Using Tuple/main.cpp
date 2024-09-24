#include <iostream>
#include <tuple>

// Function declaration returning multiple values via tuple
std::tuple<int, int, int> getRGB();

int main() {
    auto [r, g, b] = getRGB();  // Unpack the tuple
    std::cout << "Red: " << r << ", Green: " << g << ", Blue: " << b << std::endl;
    return 0;
}

// Function definition returning a tuple
std::tuple<int, int, int> getRGB() {
    return std::make_tuple(255, 100, 50);  // Return RGB values
}
