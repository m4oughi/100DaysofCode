#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int> pq;
    
    int num;
    std::cout << "Enter numbers (-1 to stop):\n";
    
    while (std::cin >> num && num != -1) {
        pq.push(num);
        std::cout << "Current top: " << pq.top() << "\n";
    }

    std::cout << "Processing numbers in priority order:\n";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
