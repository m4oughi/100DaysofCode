#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3};
    std::vector<int> target = {10, 20, 30};

    std::transform(source.begin(), source.end(), 
                   std::back_insert_iterator<std::vector<int>>(target), 
                   [](int x) { return x * 10; });

    std::cout << "Target after transformation and insertion: ";
    for (int num : target) {
        std::cout << num << " ";
    }

    return 0;
}
