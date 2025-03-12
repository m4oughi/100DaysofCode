#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for_each(numbers.begin(), numbers.end(), [](int num) { 
        std::cout << num * num << " "; 
    });

    return 0;
}
