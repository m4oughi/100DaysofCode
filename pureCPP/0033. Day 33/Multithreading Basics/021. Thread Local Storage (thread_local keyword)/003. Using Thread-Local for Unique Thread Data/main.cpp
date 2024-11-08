#include <iostream>
#include <thread>

thread_local int threadID = 0;

void assignThreadID(int id) {
    threadID = id;
    std::cout << "Assigned ID " << threadID << " to thread " << std::this_thread::get_id() << std::endl;
}

int main() {
    std::thread t1(assignThreadID, 1);
    std::thread t2(assignThreadID, 2);

    t1.join();
    t2.join();

    return 0;
}
