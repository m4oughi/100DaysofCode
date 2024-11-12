#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>

std::condition_variable cv;
std::mutex mtx;
bool stage1Done = false;
bool stage2Done = false;

void stage1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Stage 1 completed.\n";
    {
        std::lock_guard<std::mutex> lock(mtx);
        stage1Done = true;
    }
    cv.notify_all();  // Notify all threads waiting on stage 1
}

void stage2() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return stage1Done; });
    std::cout << "Stage 2 started after Stage 1.\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        stage2Done = true;
    }
    cv.notify_all();  // Notify all threads waiting on stage 2
}

void stage3() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return stage2Done; });
    std::cout << "Stage 3 started after Stage 2.\n";
}

int main() {
    std::thread t1(stage1);
    std::thread t2(stage2);
    std::thread t3(stage3);

    t1.join();
    t2.join();
    t3.join();
    return 0;
}
