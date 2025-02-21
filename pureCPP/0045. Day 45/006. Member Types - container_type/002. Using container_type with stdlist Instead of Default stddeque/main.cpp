#include <iostream>
#include <queue>
#include <list>

int main() {
    std::queue<int, std::list<int>> q;

    q.push(5);
    q.push(10);
    q.push(15);

    std::cout << "Front element: " << q.front() << std::endl;  // 5
    std::cout << "Underlying container type: std::list<int>" << std::endl;

    return 0;
}
