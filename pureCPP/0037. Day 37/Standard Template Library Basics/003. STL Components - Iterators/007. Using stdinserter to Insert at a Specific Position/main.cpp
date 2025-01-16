#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::set<int> numbers = {1, 2, 3};
    std::set<int> result = {0};

    std::copy(numbers.begin(), numbers.end(), std::inserter(result, result.begin()));

    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}
