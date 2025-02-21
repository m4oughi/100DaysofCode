#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> q;
    
    q.push("Apple");
    q.push("Banana");
    q.push("Cherry");

    while (!q.empty()) {
        std::cout << "Processing: " << q.front() << std::endl;
        q.pop();  // Remove the processed item
    }

    return 0;
}
