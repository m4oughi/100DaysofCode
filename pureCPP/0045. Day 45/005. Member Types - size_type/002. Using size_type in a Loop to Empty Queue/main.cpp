#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);

    std::queue<int>::size_type originalSize = q.size();
    std::cout << "Original Queue Size: " << originalSize << std::endl;

    while (q.size() > 0) {
        std::cout << "Processing: " << q.front() << std::endl;
        q.pop();
    }

    std::cout << "Final Queue Size: " << q.size() << std::endl;  // 0

    return 0;
}
