#include <iostream>
using namespace std;

void log(const char* message) {
    cout << "Log: " << message << endl;
}

template <typename... Args>
void log(const char* message, Args... args) {
    cout << "Log: " << message << " ";
    (cout << ... << args) << endl;
}

int main() {
    log("Error occurred");                   // Calls log(const char*)
    log("Error code", 404, ": Not Found");   // Calls log with variadic template
    
    return 0;
}
