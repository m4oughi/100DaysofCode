#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> source1 = {1, 2, 3};
    std::vector<int> source2 = {7, 8, 9};
    std::vector<int> result;

    std::copy(source1.begin(), source1.end(), std::back_insert_iterator<std::vector<int>>(result));
    std::copy(source2.begin(), source2.end(), std::back_insert_iterator<std::vector<int>>(result));

    std::cout << "Merged container: ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
