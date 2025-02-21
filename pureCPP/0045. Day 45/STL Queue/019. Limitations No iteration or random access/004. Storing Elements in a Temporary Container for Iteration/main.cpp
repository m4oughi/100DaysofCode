#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);

    std::vector<int> temp;
    
    // Transfer queue elements to a vector
    while (!q.empty()) {
        temp.push_back(q.front());
        q.pop();
    }

    // Now we can iterate over the vector
    std::cout << "Iterating over elements: ";
    for (int num : temp) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
