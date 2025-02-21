#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    if (q.size() > 0) {
        std::cout << "Front element: " << q.front() << std::endl;
    } else {
        std::cout << "Queue is empty. Cannot access front element." << std::endl;
    }

    return 0;
}
