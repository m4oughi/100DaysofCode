#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);

    // This will cause a compilation error!
    // for (auto it = pq.begin(); it != pq.end(); ++it) {
    //     std::cout << *it << " ";
    // }

    std::cout << "std::priority_queue does not support iterators!\n";
    return 0;
}
