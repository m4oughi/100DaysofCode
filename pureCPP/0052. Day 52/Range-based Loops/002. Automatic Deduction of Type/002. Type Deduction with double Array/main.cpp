#include <iostream>

int main() {
    double values[] = {1.5, 2.3, 3.7, 4.1};

    for (auto value : values) { // `auto` deduces `double`
        std::cout << value << " ";
    }

    return 0;
}
