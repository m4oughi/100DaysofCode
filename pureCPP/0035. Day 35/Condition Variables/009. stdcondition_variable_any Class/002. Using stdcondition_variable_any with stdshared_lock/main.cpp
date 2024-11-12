#include <iostream>
#include <thread>
#include <condition_variable>
#include <shared_mutex>

std::condition_variable_any cv_any;
std::shared_mutex shared_mtx;
bool dataReady = false;

void reader(int id) {
    std::shared_lock<std::shared_mutex> lock(shared_mtx);
    cv_any.wait(lock, [] { return dataReady; });  // Wait for data to be ready
    std::cout << "Reader " << id << " reads data.\n";
}

void writer() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    {
        std::unique_lock<std::shared_mutex> lock(shared_mtx);
        dataReady = true;
    }
    cv_any.notify_all();  // Notify all readers
}

int main() {
    std::thread r1(reader, 1);
    std::thread r2(reader, 2);
    std::thread w(writer);

    r1.join();
    r2.join();
    w.join();
    return 0;
}
