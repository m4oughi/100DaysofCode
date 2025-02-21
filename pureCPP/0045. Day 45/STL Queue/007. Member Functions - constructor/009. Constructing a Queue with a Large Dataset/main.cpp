#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    
    for (int i = 1; i <= 1000000; ++i) {
        q.push(i);
    }

    std::cout << "Queue size: " << q.size() << std::endl;  // 1000000

    return 0;
}
