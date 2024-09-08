#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    numbers.pop_back();

    std::cout << "Elements in the vector after pop_back:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
