#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};

    // Chain insert and erase operations
    numbers.insert(numbers.begin() + 1, 10);
    numbers.erase(numbers.begin() + 2);
    numbers.insert(numbers.end(), {20, 30});
    numbers.erase(numbers.begin(), numbers.begin() + 1);

    std::cout << "Final elements in the vector:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
