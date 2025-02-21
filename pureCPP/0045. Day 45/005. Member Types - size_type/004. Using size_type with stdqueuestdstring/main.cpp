#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> q;
    q.push("Apple");
    q.push("Banana");
    q.push("Cherry");

    std::queue<std::string>::size_type queueSize = q.size();
    std::cout << "Queue Size: " << queueSize << std::endl;  // 3

    return 0;
}
