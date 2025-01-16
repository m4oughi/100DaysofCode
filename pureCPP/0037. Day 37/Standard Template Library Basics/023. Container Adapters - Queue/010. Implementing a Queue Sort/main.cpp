#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

void sortQueue(std::queue<int>& q) {
    std::vector<int> tempVec;

    // Transfer queue elements to vector
    while (!q.empty()) {
        tempVec.push_back(q.front());
        q.pop();
    }

    // Sort the vector
    std::sort(tempVec.begin(), tempVec.end());

    // Move sorted elements back to queue
    for (int num : tempVec) {
        q.push(num);
    }
}

int main() {
    std::queue<int> q;
    q.push(3);
    q.push(1);
    q.push(4);
    q.push(2);

    sortQueue(q);

    std::cout << "Sorted queue (front to back): ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << "\n";

    return 0;
}
