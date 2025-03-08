#include <iostream>
#include <deque>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    
    // Construct deque from array
    std::deque<int> dq(arr.begin(), arr.end());

    std::cout << "Deque elements: ";
    for (int num : dq) {
        std::cout << num << " ";
    }

    return 0;
}
