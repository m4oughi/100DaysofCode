#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> squares;

    std::transform(numbers.begin(), numbers.end(), std::back_inserter(squares), [](int n) { return n * n; });

    for (int sq : squares) {
        std::cout << sq << " ";
    }
    return 0;
}
