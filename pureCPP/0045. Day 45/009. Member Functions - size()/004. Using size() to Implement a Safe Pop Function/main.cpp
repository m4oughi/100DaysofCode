#include <iostream>
#include <queue>

void safePop(std::queue<int>& q) {
    if (q.size() > 0) {
        std::cout << "Popping: " << q.front() << std::endl;
        q.pop();
    } else {
        std::cout << "Queue is empty. Cannot pop." << std::endl;
    }
}

int main() {
    std::queue<int> q;
    safePop(q);  // Should print "Queue is empty. Cannot pop."

    q.push(100);
    q.push(200);
    
    safePop(q);  // Should pop 100
    safePop(q);  // Should pop 200
    safePop(q);  // Should print "Queue is empty. Cannot pop."

    return 0;
}
