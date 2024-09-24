#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> arr = {2, 4, 6, 8, 10};
    bool allEven = std::all_of(arr.begin(), arr.end(), [](int n) { return n % 2 == 0; });  // Check if all elements are even

    std::cout << "All elements are even: " << (allEven ? "Yes" : "No") << std::endl;  // Output: All elements are even: Yes
    return 0;
}