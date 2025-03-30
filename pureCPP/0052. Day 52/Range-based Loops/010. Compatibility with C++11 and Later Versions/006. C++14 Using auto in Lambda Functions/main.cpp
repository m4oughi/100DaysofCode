#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};

    auto print = [](auto num) { // C++14 allows `auto` in lambdas
        std::cout << num << " ";
    };

    for (auto num : numbers) {
        print(num);
    }

    return 0;
}
