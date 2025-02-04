#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    // Find the element 30
    auto it = std::find(dq.begin(), dq.end(), 30);

    if (it != dq.end()) {
        dq.erase(it); // Remove the element
        std::cout << "Element removed.\n";
    } else {
        std::cout << "Element not found.\n";
    }

    for (int i : dq) std::cout << i << " ";

    return 0;
}
