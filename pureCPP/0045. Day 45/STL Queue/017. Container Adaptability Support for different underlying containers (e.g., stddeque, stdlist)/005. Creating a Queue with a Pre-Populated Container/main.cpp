#include <iostream>
#include <queue>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40};

    std::queue<int, std::list<int>> q(myList);  // Using existing list

    std::cout << "Front: " << q.front() << ", Back: " << q.back() << std::endl;

    return 0;
}
