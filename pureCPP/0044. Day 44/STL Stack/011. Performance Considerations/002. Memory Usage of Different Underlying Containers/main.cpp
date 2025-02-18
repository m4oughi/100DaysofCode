#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>

int main() {
    std::stack<int, std::deque<int>> stackDeque;
    std::stack<int, std::vector<int>> stackVector;
    std::stack<int, std::list<int>> stackList;

    for (int i = 0; i < 100000; ++i) {
        stackDeque.push(i);
        stackVector.push(i);
        stackList.push(i);
    }

    std::cout << "Stacks initialized with different containers." << std::endl;

    return 0;
}
