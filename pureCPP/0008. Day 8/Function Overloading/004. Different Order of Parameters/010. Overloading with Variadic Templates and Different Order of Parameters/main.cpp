#include <iostream>
using namespace std;

template <typename T, typename... Args>
void log(T first, Args... args) {
    cout << "Log: " << first;
    (cout << ... << args) << endl;
}

template <typename... Args, typename T>
void log(Args... args, T last) {
    (cout << ... << args);
    cout << " Log: " << last << endl;
}

int main() {
    log(1, 2.5, "Hello");         // Calls log(T, Args...)
    log(1, 2, 3, "End");          // Calls log(Args..., T)
    return 0;
}
