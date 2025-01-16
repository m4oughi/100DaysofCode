#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        std::cout << q.front() << " "; // Outputs the front element
        q.pop();                       // Removes the front element
    }
    return 0;
}
