#include <iostream>
using namespace std;

// Variadic template
template<typename T, typename... Args>
void logMessage(T first, Args... args) {
    cout << first << " ";
    logMessage(args...);  // Recursion
}

// Base case to stop recursion
void logMessage() {
    cout << endl;
}

int main() {
    logMessage("Error:", 404, "Not Found");
    logMessage("User:", "John", "Logged in", 5.25);

    return 0;
}
