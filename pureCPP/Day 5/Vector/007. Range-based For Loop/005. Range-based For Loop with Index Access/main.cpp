#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Elements with their indices:" << std::endl;
    int index = 0;
    for (int num : numbers) {
        std::cout << "Index " << index << ": " << num << std::endl;
        ++index;
    }

    return 0;
}
