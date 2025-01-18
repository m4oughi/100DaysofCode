#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers;
    std::vector<int> source1 = {1, 2, 3};
    std::vector<int> source2 = {4, 5, 6};

    auto it = std::back_insert_iterator<std::vector<int>>(numbers);

    std::copy(source1.begin(), source1.end(), it);
    std::copy(source2.begin(), source2.end(), it);

    std::cout << "Chained insertion result: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
