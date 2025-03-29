#include <iostream>
#include <coroutine>
#include <chrono>
#include <thread>

struct Awaiter {
    bool await_ready() { return false; }
    void await_suspend(std::coroutine_handle<>) { 
        std::this_thread::sleep_for(std::chrono::seconds(1)); 
    }
    void await_resume() {}
};

struct Task {
    struct promise_type {
        Task get_return_object() { return {}; }
        std::suspend_never initial_suspend() { return {}; }
        std::suspend_never final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
    };
};

Task myAsyncFunction() {
    std::cout << "Start waiting...\n";
    co_await Awaiter();
    std::cout << "Done waiting.\n";
}

int main() {
    myAsyncFunction();
}
