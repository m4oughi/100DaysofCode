#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Back element: " << q.back() << std::endl;  // 30

    return 0;
}
