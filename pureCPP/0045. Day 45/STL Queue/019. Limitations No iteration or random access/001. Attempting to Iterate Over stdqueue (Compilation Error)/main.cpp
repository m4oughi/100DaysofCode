#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    // ERROR: std::queue does not support iteration
    // for(auto it = q.begin(); it != q.end(); ++it) {
    //     std::cout << *it << " ";
    // }

    std::cout << "Cannot iterate over std::queue directly!" << std::endl;
    
    return 0;
}
