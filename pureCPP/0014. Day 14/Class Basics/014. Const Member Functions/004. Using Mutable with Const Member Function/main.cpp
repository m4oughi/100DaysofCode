#include <iostream>
using namespace std;

class Log {
private:
    mutable int accessCount;

public:
    Log() : accessCount(0) {}

    void showLog() const {
        accessCount++;  // Allowed due to `mutable`
        cout << "Log accessed " << accessCount << " times" << endl;
    }
};

int main() {
    Log log;
    log.showLog();  // Accessing const function multiple times
    log.showLog();
    return 0;
}
