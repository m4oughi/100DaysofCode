#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers = {1, 2, 2, 3, 3, 3};
    for (int num : {1, 2, 3}) {
        std::cout << "Count of " << num << ": " << numbers.count(num) << std::endl;
    }
    return 0;
}
