#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> customerQueue;

    customerQueue.push("Alice");
    customerQueue.push("Bob");
    customerQueue.push("Charlie");

    while (!customerQueue.empty()) {
        std::cout << "Serving: " << customerQueue.front() << std::endl;
        customerQueue.pop();
    }

    return 0;
}
