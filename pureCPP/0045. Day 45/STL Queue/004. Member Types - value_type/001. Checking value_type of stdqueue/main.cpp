#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    // Using value_type to declare a variable
    std::queue<int>::value_type num = 42;

    q.push(num);
    std::cout << "Front element: " << q.front() << std::endl;  // 42

    return 0;
}
