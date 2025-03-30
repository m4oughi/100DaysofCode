#include <iostream>

int main() {
    double values[] = {1.1, 2.2, 3.3, 4.4};

    for (auto value : values) {
        std::cout << value << " ";
    }

    return 0;
}
