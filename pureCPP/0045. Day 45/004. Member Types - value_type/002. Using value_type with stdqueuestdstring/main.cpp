#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> q;

    // Using value_type to declare a variable
    std::queue<std::string>::value_type name = "Alice";

    q.push(name);
    std::cout << "Front name: " << q.front() << std::endl;  // Alice

    return 0;
}
