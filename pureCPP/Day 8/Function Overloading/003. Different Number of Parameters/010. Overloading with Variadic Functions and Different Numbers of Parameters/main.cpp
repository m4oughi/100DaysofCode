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
    log("Initialization");                      // Calls log(const char*)
    log("Error", 404, ": Page not found");      // Calls log(const char*, Args...)
    
    return 0;
}
