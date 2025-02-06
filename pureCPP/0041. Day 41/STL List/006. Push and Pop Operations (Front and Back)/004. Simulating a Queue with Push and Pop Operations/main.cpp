#include <iostream>
#include <list>

int main() {
    std::list<int> queue;

    queue.push_back(1);
    queue.push_back(2);
    queue.push_back(3);

    std::cout << "Queue front: " << queue.front() << std::endl;

    queue.pop_front();  // Removing front element (FIFO)

    std::cout << "Queue front after pop: " << queue.front() << std::endl;

    return 0;
}
