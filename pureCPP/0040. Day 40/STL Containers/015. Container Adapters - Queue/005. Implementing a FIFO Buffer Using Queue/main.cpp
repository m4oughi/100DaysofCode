#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> messages;

    messages.push("Message 1");
    messages.push("Message 2");
    messages.push("Message 3");

    while (!messages.empty()) {
        std::cout << "Processing: " << messages.front() << "\n";
        messages.pop();
    }

    return 0;
}
