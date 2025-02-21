#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::queue<int, std::vector<int>> q;  // ERROR: std::vector does not support pop_front()

    q.push(1);
    q.push(2);
    q.push(3);

    return 0;
}
