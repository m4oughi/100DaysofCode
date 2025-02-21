#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        std::queue<int>::value_type val = q.front();
        std::cout << "Processing: " << val << std::endl;
        q.pop();
    }

    return 0;
}
