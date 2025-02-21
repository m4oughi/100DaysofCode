#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(5);
    std::cout << "Back after first push: " << q.back() << std::endl;  // 5

    q.push(15);
    std::cout << "Back after second push: " << q.back() << std::endl;  // 15

    q.push(25);
    std::cout << "Back after third push: " << q.back() << std::endl;  // 25

    return 0;
}
