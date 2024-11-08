#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>

std::mutex mtx;
std::condition_variable cv;
int turn = 0;

void task(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [id] { return id == turn; });
    std::cout << "Task " << id << " is running!" << std::endl;
    turn = (turn + 1) % 3;
    cv.notify_all();
}

int main() {
    std::thread t1(task, 0);
    std::thread t2(task, 1);
    std::thread t3(task, 2);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
