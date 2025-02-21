#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    for (int i = 1; i <= 5; ++i) {
        q.push(i * 10);
        std::cout << "Pushed: " << i * 10 << ", Queue back: " << q.back() << std::endl;
    }

    return 0;
}
