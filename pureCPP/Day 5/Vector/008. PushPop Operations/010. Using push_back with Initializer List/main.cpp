#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    for (int num : {10, 20, 30, 40, 50}) {
        numbers.push_back(num);
    }

    std::cout << "Elements in the vector after initializer list push_back:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
