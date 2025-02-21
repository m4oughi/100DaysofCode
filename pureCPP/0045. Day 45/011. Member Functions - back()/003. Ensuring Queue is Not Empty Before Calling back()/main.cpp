#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    if (!q.empty()) {
        std::cout << "Back element: " << q.back() << std::endl;
    } else {
        std::cout << "Queue is empty, cannot access back element." << std::endl;
    }

    q.push(100);
    std::cout << "Back element after push: " << q.back() << std::endl;  // 100

    return 0;
}
