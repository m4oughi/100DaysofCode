#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::queue<int, std::vector<int>> q;

    q.push(100);
    q.push(200);
    q.push(300);

    std::cout << "Front element: " << q.front() << std::endl;  // 100
    std::cout << "Underlying container type: std::vector<int>" << std::endl;

    return 0;
}
