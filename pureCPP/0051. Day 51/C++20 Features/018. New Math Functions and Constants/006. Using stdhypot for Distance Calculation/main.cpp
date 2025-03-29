#include <iostream>
#include <cmath>

int main() {
    double x = 3.0, y = 4.0;
    double hypotenuse = std::hypot(x, y);

    std::cout << "Hypotenuse of (3, 4): " << hypotenuse << "\n";

    return 0;
}
