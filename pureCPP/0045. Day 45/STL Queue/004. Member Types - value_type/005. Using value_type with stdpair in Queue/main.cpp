#include <iostream>
#include <queue>

int main() {
    std::queue<std::pair<int, std::string>> q;

    // Using value_type to declare a variable
    std::queue<std::pair<int, std::string>>::value_type data = {1, "Task 1"};
    q.push(data);

    std::cout << "Front Task ID: " << q.front().first << ", Description: " << q.front().second << std::endl;

    return 0;
}
