#include <iostream>
#include <queue>
#include <vector>

template <typename T>
class CustomQueue {
public:
    std::queue<T> q;

    typename std::queue<T>::container_type& getContainer() {
        return q._Get_container();  // Non-standard function
    }
};

int main() {
    CustomQueue<int> cq;
    cq.q.push(10);
    cq.q.push(20);
    cq.q.push(30);

    auto& container = cq.getContainer();
    std::cout << "Container Size: " << container.size() << std::endl;  // 3
    std::cout << "First Element: " << container.front() << std::endl;  // 10

    return 0;
}
