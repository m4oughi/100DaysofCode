#include <iostream>
#include <queue>
#include <string>

int main() {
    std::queue<std::string> q;
    
    q.push("Alice");
    q.push("Bob");
    q.push("Charlie");

    std::cout << "First in queue: " << q.front() << std::endl;  // "Alice"
    std::cout << "Last in queue: " << q.back() << std::endl;    // "Charlie"

    return 0;
}
