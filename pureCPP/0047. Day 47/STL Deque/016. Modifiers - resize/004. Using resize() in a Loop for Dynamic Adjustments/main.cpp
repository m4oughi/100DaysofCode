#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    for (int i = 1; i <= 3; i++) {
        dq.resize(dq.size() + 2, i * 10);  // Expanding dynamically
        std::cout << "Deque after iteration " << i << ": ";
        for (int num : dq) std::cout << num << " ";
        std::cout << "\n";
    }

    return 0;
}
