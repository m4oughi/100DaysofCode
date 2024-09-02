#include <iostream>
#include <map>
#include <string>

// Simple commands
void commandHello() { std::cout << "Hello!" << std::endl; }
void commandExit() { std::cout << "Exiting..." << std::endl; }

int main() {
    // Map commands to function pointers
    std::map<std::string, void (*)()> commandMap;
    commandMap["hello"] = commandHello;
    commandMap["exit"] = commandExit;

    // Execute commands based on user input
    std::string userInput;
    std::cout << "Enter command (hello/exit): ";
    std::cin >> userInput;

    auto it = commandMap.find(userInput);
    if (it != commandMap.end()) {
        it->second();  // Call the function associated with the command
    } else {
        std::cout << "Unknown command" << std::endl;
    }

    return 0;
}
