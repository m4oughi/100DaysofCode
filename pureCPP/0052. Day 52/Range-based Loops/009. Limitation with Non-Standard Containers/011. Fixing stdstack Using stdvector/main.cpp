#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);

    std::vector<int> temp;
    while (!stk.empty()) {
        temp.push_back(stk.top());
        stk.pop();
    }

    for (int num : temp) { // ✅ Works now
        std::cout << num << " ";
    }

    return 0;
}
