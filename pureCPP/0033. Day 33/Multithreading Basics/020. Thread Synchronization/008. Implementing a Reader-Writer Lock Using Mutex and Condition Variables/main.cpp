#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <vector>

std::mutex mtx;
std::condition_variable cv;
int readers = 0;
bool writerActive = false;

void reader(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return !writerActive; });
    ++readers;
    lock.unlock();

    std::cout << "Reader " << id << " is reading." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    lock.lock();
    --readers;
    if (readers == 0) cv.notify_all();
    std::cout << "Reader " << id << " has finished reading." << std::endl;
}

void writer(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return !writerActive && readers == 0; });
    writerActive = true;
    
    std::cout << "Writer " << id << " is writing." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    writerActive = false;
    cv.notify_all();
    std::cout << "Writer " << id << " has finished writing." << std::endl;
}

int main() {
    std::thread r1(reader, 1);
    std::thread r2(reader, 2);
    std::thread w1(writer, 1);
    std::thread r3(reader, 3);

    r1.join();
    r2.join();
    w1.join();
    r3.join();

    return 0;
}
