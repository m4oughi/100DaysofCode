#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> result(vec.size());

    std::transform(vec.begin(), vec.end(), result.begin(), [](int x) { return x * x; });

    std::cout << "After transform (squares): ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
