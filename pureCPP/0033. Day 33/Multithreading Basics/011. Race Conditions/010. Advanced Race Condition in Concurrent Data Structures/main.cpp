#include <iostream>
#include <thread>
#include <mutex>
#include <list>

std::list<int> sharedList;
std::mutex mtx;

void addToList(int value) {
    std::lock_guard<std::mutex> lock(mtx);
    sharedList.push_back(value);
}

void removeFromList() {
    std::lock_guard<std::mutex> lock(mtx);
    if (!sharedList.empty()) {
        sharedList.pop_back();
    }
}

int main() {
    std::thread t1(addToList, 1);
    std::thread t2(removeFromList);

    t1.join();
    t2.join();

    return 0;
}
