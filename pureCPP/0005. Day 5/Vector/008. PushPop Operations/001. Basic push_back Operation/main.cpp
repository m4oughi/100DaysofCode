#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    std::cout << "Elements in the vector after push_back:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
