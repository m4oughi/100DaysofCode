#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <shared_mutex>

std::condition_variable_any cv_any;
std::shared_mutex shared_mtx;
bool stage1Done = false;
bool stage2Done = false;

void stage1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Stage 1 completed.\n";
    {
        std::unique_lock<std::shared_mutex> lock(shared_mtx);
        stage1Done = true;
    }
    cv_any.notify_all();
}

void stage2() {
    std::shared_lock<std::shared_mutex> lock(shared_mtx);
    cv_any.wait(lock, [] { return stage1Done; });
    std::cout << "Stage 2 started after Stage 1.\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::unique_lock<std::shared_mutex> lock(shared_mtx);
        stage2Done = true;
    }
    cv_any.notify_all();
}

void stage3() {
    std::unique_lock<std::shared_mutex> lock(shared_mtx);
    cv_any.wait(lock, [] { return stage2Done; });
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
