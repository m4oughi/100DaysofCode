#include <iostream>
#include <vector>
#include <algorithm>  // for std::remove_if

int main() {
    std::vector<int> numbers = {10, 25, 30, 45, 50};

    numbers.erase(std::remove_if(numbers.begin(), numbers.end(),
                [](int num) { return num % 2 == 0; }), numbers.end());

    std::cout << "Elements after erasing even numbers:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
