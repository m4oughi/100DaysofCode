#include <iostream>
#include <thread>
using namespace std;

class ThreadHandler {
private:
    static int sharedCounter;

public:
    static void incrementCounter() {
        for (int i = 0; i < 1000; ++i) {
            sharedCounter++;
        }
    }

    static int getCounter() {
        return sharedCounter;
    }
};

// Initialize static data member
int ThreadHandler::sharedCounter = 0;

int main() {
    thread t1(ThreadHandler::incrementCounter);
    thread t2(ThreadHandler::incrementCounter);

    t1.join();
    t2.join();

    cout << "Final Counter Value: " << ThreadHandler::getCounter() << endl;

    return 0;
}
