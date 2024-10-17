#include <iostream>
#include <thread>
#include <memory>

class MoveOnly {
    std::unique_ptr<int> data;
public:
    MoveOnly(int value) : data(std::make_unique<int>(value)) {
        std::cout << "Constructor: Allocating resource with unique_ptr.\n";
    }

    ~MoveOnly() {
        std::cout << "Destructor: Resource automatically released by unique_ptr.\n";
    }

    MoveOnly(const MoveOnly&) = delete;
    MoveOnly& operator=(const MoveOnly&) = delete;

    MoveOnly(MoveOnly&&) noexcept = default;
    MoveOnly& operator=(MoveOnly&&) noexcept = default;

    void showData() const {
        std::cout << "Data: " << *data << "\n";
    }
};

void process(MoveOnly obj) {
    obj.showData();
}

int main() {
    MoveOnly obj(300);

    // Move the object into the thread
    std::thread t(process, std::move(obj));
    t.join();  // Wait for thread to finish
}
