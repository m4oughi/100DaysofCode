#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    for (int i = 1; i <= 5; ++i) {
        numbers.push_back(i * 10);
    }

    std::cout << "Elements in the vector after loop push_back:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
