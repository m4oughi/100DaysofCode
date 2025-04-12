#include <iostream>

enum Color { Red, Green, Blue };

int main() {
    Color favorite = Green;
    std::cout << "Favorite color is Green: " << (favorite == Green) << std::endl;
}
