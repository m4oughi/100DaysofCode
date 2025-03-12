#include <iostream>
#include <initializer_list>

std::initializer_list<int> getNumbers() {
    return {100, 200, 300};
}

int main() {
    for (int num : getNumbers()) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    return 0;
}
