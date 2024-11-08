#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>

class CancellationToken {
    std::atomic<bool> cancelled;
public:
    CancellationToken() : cancelled(false) {}
    void cancel() { cancelled.store(true); }
    bool isCancelled() const { return cancelled.load(); }
};

void cancellableTask(CancellationToken& token) {
    while (!token.isCancelled()) {
        std::cout << "Thread is running..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
    std::cout << "Thread terminated via cancellation token." << std::endl;
}

int main() {
    CancellationToken token;
    std::thread t(cancellableTask, std::ref(token));

    std::this_thread::sleep_for(std::chrono::seconds(1));
    token.cancel();  // Trigger cancellation
    t.join();

    std::cout << "Thread has terminated using cancellation token." << std::endl;

    return 0;
}
