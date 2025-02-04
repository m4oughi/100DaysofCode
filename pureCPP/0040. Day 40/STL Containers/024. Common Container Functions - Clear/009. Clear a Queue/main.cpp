#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);

    std::cout << "Before clearing, size: " << myQueue.size() << std::endl;

    // Empty the queue by popping all elements
    while (!myQueue.empty()) {
        myQueue.pop();
    }

    std::cout << "After clearing, size: " << myQueue.size() << std::endl;  // Output: After clearing, size: 0

    return 0;
}
