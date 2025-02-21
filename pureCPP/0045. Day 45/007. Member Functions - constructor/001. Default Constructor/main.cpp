#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;  // Default constructor

    std::cout << "Queue is empty: " << std::boolalpha << q.empty() << std::endl;  // true

    return 0;
}
