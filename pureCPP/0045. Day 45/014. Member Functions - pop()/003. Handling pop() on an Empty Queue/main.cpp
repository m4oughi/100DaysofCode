#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    if (q.empty()) {
        std::cout << "Queue is already empty. Cannot pop." << std::endl;
    } else {
        q.pop();
    }

    return 0;
}
