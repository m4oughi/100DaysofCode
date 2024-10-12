#include <iostream>
#include <thread>
using namespace std;

class ThreadManager {
public:
    static thread_local int threadID;  // Thread-local static member

    static void setThreadID(int id) {
        threadID = id;
    }

    static void showThreadID() {
        cout << "Thread ID: " << threadID << endl;
    }
};

// Memory allocation for thread-local static member
thread_local int ThreadManager::threadID = 0;

void threadFunction(int id) {
    ThreadManager::setThreadID(id);
    ThreadManager::showThreadID();
}

int main() {
    thread t1(threadFunction, 1);
    thread t2(threadFunction, 2);

    t1.join();
    t2.join();

    return 0;
}
