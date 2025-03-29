#include <iostream>

void processItems(int count) {
    for (int i = 0; i < count; ++i) {
        if (i < 10) [[likely]] {
            std::cout << "Processing common case: " << i << "\n";
        } else {
            std::cout << "Processing rare case: " << i << "\n";
        }
    }
}

int main() {
    processItems(12);
}
