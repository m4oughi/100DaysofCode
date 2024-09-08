#include <iostream>
#include <vector>

int main() {
    const std::vector<int> vec = {10, 20, 30, 40};

    for (int i : vec) {
        std::cout << i << " "; // Prints 10 20 30 40
    }
}
