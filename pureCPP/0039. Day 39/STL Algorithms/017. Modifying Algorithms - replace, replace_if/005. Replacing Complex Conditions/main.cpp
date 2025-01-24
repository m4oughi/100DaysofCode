#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 15, 25, 35, 45};

    std::replace_if(vec.begin(), vec.end(), [](int x) { return x > 20 && x < 40; }, 0);

    std::cout << "After replace_if with range condition: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
