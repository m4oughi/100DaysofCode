#include <iostream>
#include <queue>
#include <vector>
#include <new>

int main() {
    try {
        std::queue<int, std::vector<int>> q;

        while (true) {
            q.push(1);  // Might throw std::bad_alloc when memory is exhausted
        }
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    }

    return 0;
}
