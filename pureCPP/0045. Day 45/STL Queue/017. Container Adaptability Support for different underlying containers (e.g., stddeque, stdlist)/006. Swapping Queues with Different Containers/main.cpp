#include <iostream>
#include <queue>
#include <deque>
#include <list>

int main() {
    std::queue<int, std::deque<int>> q1;
    std::queue<int, std::list<int>> q2;  // ERROR: Swap only works if underlying containers are the same!

    q1.push(1);
    q1.push(2);
    q2.push(100);
    q2.push(200);

    // std::swap(q1, q2);  // ❌ This will not compile

    return 0;
}
