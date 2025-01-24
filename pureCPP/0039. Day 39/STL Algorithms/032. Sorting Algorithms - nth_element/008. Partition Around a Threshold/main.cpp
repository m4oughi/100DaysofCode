#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {15, 22, 5, 18, 9, 13, 25};

    int threshold = 15;
    std::nth_element(numbers.begin(), std::find_if(numbers.begin(), numbers.end(), [threshold](int x) { return x >= threshold; }), numbers.end());

    std::cout << "Numbers partitioned around threshold 15: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
