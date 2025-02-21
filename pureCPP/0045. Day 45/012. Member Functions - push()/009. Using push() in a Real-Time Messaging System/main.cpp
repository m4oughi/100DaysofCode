#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> messages;

    messages.push("Hello!");
    messages.push("How are you?");
    messages.push("Goodbye!");

    std::cout << "Newest message: " << messages.back() << std::endl;  // "Goodbye!"

    return 0;
}
