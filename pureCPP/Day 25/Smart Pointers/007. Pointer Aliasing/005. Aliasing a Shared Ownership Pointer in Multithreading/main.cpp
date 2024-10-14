#include <iostream>
#include <memory>
#include <thread>

struct BigData {
    int part1;
    int part2;
};

void worker(std::shared_ptr<int> partPtr) {
    std::cout << "Thread working on part: " << *partPtr << std::endl;
}

int main() {
    auto bigDataPtr = std::make_shared<BigData>();
    bigDataPtr->part1 = 42;
    bigDataPtr->part2 = 84;

    // Create alias pointers to different parts of BigData
    std::shared_ptr<int> part1Ptr(bigDataPtr, &bigDataPtr->part1);
    std::shared_ptr<int> part2Ptr(bigDataPtr, &bigDataPtr->part2);

    // Spawn threads that work on different parts of BigData
    std::thread t1(worker, part1Ptr);
    std::thread t2(worker, part2Ptr);

    t1.join();
    t2.join();

    return 0;
}
