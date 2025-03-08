#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    for (int i = 1; i <= 3; ++i) {
        // Fill deque
        dq = {i * 10, i * 20, i * 30};

        std::cout << "Batch " << i << " before clear: ";
        for (int num : dq) std::cout << num << " ";
        std::cout << "\n";

        dq.clear();  // Clear deque after processing

        std::cout << "Batch " << i << " after clear: " << dq.size() << " elements\n\n";
    }

    return 0;
}
