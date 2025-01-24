#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> destination;

    int count = 0;
    for (int num : source) {
        if (num % 2 == 0 && count < 3) { // Copy first 3 even numbers
            destination.push_back(num);
            count++;
        }
    }

    std::cout << "First 3 even numbers: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
