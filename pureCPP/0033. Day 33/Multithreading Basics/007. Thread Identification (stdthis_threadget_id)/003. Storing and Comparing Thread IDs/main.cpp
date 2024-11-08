#include <iostream>
#include <thread>

void threadFunction() {
    std::cout << "Thread Function, ID: " << std::this_thread::get_id() << std::endl;
}

int main() {
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);

    std::thread::id t1_id = t1.get_id();
    std::thread::id t2_id = t2.get_id();

    std::cout << "Stored t1 ID: " << t1_id << std::endl;
    std::cout << "Stored t2 ID: " << t2_id << std::endl;

    if (t1_id != t2_id) {
        std::cout << "t1 and t2 have different thread IDs." << std::endl;
    }

    t1.join();
    t2.join();

    return 0;
}
