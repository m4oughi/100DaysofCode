#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> scores = {{"Alice", 85}, {"Bob", 90}, {"Charlie", 75}};

    std::cout << "Alice's score: " << scores["Alice"] << "\n"; // 85
    std::cout << "Charlie's score using .at(): " << scores.at("Charlie") << "\n"; // 75

    return 0;
}
