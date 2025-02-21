#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> vipQueue, regularQueue;

    vipQueue.push("VIP - Alice");
    vipQueue.push("VIP - Bob");

    regularQueue.push("Regular - John");
    regularQueue.push("Regular - Sarah");
    regularQueue.push("Regular - David");

    std::cout << "Before swap: VIP front = " << vipQueue.front() << ", Regular front = " << regularQueue.front() << std::endl;

    std::swap(vipQueue, regularQueue);

    std::cout << "After swap: VIP front = " << vipQueue.front() << ", Regular front = " << regularQueue.front() << std::endl;

    return 0;
}
