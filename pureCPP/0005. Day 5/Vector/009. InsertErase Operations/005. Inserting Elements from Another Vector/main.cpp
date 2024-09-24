#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers1 = {10, 20, 30, 40, 50};
    std::vector<int> numbers2 = {60, 70, 80};

    auto it = numbers1.begin() + 3;  // Iterator to the 4th position
    numbers1.insert(it, numbers2.begin(), numbers2.end());  // Insert all elements from numbers2

    std::cout << "Elements after inserting from another vector:" << std::endl;
    for (int num : numbers1) {
        std::cout << num << " ";
    }

    return 0;
}
