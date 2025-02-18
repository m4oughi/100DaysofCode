#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::stack<int> s;
    for (int i = 1; i <= 5; ++i) s.push(i);

    std::vector<int> vec;
    while (!s.empty()) {
        vec.push_back(s.top());
        s.pop();
    }

    std::cout << "Vector elements (in original order): ";
    for (auto it = vec.rbegin(); it != vec.rend(); ++it)
        std::cout << *it << " ";
    return 0;
}
