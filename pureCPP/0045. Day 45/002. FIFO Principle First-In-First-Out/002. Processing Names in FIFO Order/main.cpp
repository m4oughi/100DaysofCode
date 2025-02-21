#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> q;
    
    q.push("Alice");
    q.push("Bob");
    q.push("Charlie");

    while (!q.empty()) {
        std::cout << "Processing: " << q.front() << std::endl;
        q.pop();
    }

    return 0;
}
