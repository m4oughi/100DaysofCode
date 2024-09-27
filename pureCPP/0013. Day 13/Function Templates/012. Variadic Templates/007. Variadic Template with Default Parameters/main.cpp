#include <iostream>
using namespace std;

template<typename T, typename... Args>
void log(T first, Args... args) {
    cout << "Log: " << first << endl;
    if constexpr(sizeof...(args) > 0) {
        log(args...);  // Recursive call if there are more arguments
    }
}

int main() {
    log("Error:", 404, "Not Found");  // Logs each argument on a new line
    return 0;
}
