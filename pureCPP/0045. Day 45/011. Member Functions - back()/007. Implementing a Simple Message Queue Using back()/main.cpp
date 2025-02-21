#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> messageQueue;

    messageQueue.push("Hello!");
    messageQueue.push("How are you?");
    messageQueue.push("Goodbye!");

    std::cout << "Most recent message: " << messageQueue.back() << std::endl;  // "Goodbye!"

    messageQueue.push("See you soon!");
    std::cout << "Updated most recent message: " << messageQueue.back() << std::endl;  // "See you soon!"

    return 0;
}
