#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {5, 10, 15, 20, 25};

    int sum = 0;
    std::cout << "Calculating sum of elements:" << std::endl;
    for (int num : numbers) {
        sum += num;
    }
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
