#include <iostream>
#include <queue>
#include <vector>

int main() {
    const int N = 100000;
    std::priority_queue<int> pq;
    std::vector<int> vec;

    for (int i = 0; i < N; ++i) {
        pq.push(i);
        vec.push_back(i);
    }

    std::cout << "Priority queue size: " << pq.size() << "\n";
    std::cout << "Vector size: " << vec.size() << "\n";

    return 0;
}
