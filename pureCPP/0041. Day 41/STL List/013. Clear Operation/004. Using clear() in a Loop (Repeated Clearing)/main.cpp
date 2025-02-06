#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30};

    for (int i = 0; i < 3; ++i) {
        numbers.clear();
        std::cout << "Iteration " << i + 1 << " - Size after clear: " << numbers.size() << std::endl;
    }

    return 0;
}
