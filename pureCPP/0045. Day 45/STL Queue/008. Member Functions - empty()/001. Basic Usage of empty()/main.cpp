#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    std::cout << "Is queue empty? " << std::boolalpha << q.empty() << std::endl;  // true

    q.push(10);
    std::cout << "Is queue empty after push? " << q.empty() << std::endl;  // false

    return 0;
}
