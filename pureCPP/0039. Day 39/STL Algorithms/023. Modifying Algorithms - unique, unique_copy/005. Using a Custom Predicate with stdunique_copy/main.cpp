#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 11, 20, 21, 30, 31};
    std::vector<int> result;

    std::unique_copy(vec.begin(), vec.end(), std::back_inserter(result), [](int a, int b) {
        return (a / 10) == (b / 10); // Group by tens
    });

    std::cout << "Result after std::unique_copy: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
