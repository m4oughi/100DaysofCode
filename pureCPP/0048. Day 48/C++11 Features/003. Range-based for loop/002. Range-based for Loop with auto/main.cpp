#include <iostream>
#include <vector>

int main() {
    std::vector<double> values = {3.14, 2.71, 1.61};

    for (auto value : values) {
        std::cout << value << " ";
    }

    return 0;
}
