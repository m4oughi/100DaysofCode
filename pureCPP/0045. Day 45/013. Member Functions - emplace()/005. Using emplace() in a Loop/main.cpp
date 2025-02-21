#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    for (int i = 1; i <= 5; ++i) {
        q.emplace(i * 10);
        std::cout << "Emplaced: " << q.back() << std::endl;
    }

    return 0;
}
