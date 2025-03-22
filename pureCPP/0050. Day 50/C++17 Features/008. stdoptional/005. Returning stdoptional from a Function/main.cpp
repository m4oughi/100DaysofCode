#include <iostream>
#include <optional>

std::optional<int> findValue(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) return arr[i];
    }
    return std::nullopt;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    
    auto result = findValue(numbers, 5, 3);
    if (result) {
        std::cout << "Found: " << *result << '\n';
    } else {
        std::cout << "Not found\n";
    }

    return 0;
}
