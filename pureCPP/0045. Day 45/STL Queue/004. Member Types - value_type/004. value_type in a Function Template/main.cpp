#include <iostream>
#include <queue>

template <typename T>
void printFront(std::queue<T>& q) {
    typename std::queue<T>::value_type val = q.front();
    std::cout << "Front element: " << val << std::endl;
}

int main() {
    std::queue<int> q;
    q.push(10);
    q.push(20);

    printFront(q);  // Output: Front element: 10

    return 0;
}
