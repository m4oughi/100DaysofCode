#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    std::cout << "Back before modification: " << q.back() << std::endl;  // 3

    q.back() = 100;  // Modify the back element

    std::cout << "Back after modification: " << q.back() << std::endl;  // 100

    return 0;
}
