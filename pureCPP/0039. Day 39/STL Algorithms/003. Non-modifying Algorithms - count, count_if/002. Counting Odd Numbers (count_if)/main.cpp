#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};

    int oddCount = std::count_if(numbers.begin(), numbers.end(), [](int x) {
        return x % 2 != 0;
    });

    std::cout << "There are " << oddCount << " odd numbers." << std::endl;

    return 0;
}
