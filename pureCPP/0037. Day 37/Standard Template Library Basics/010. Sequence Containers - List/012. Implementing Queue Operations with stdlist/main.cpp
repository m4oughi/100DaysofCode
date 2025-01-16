#include <iostream>
#include <list>

int main() {
    std::list<int> queue;
    queue.push_back(1);
    queue.push_back(2);
    queue.push_back(3);

    while (!queue.empty()) {
        std::cout << "Front element: " << queue.front() << "\n";
        queue.pop_front();
    }
    return 0;
}
