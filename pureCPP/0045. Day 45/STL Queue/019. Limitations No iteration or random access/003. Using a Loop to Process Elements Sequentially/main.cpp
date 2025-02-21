#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);

    std::cout << "Processing queue elements: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();  // Removing the element after processing
    }
    std::cout << std::endl;

    return 0;
}
