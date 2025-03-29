#include <iostream>
#include <coroutine>

struct ManualCoroutine {
    struct promise_type {
        ManualCoroutine get_return_object() { return ManualCoroutine{this}; }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
    };

    std::coroutine_handle<promise_type> handle;

    ManualCoroutine(promise_type* p) : handle(std::coroutine_handle<promise_type>::from_promise(*p)) {}
    ~ManualCoroutine() { handle.destroy(); }

    void resume() { handle.resume(); }
};

ManualCoroutine manualTask() {
    std::cout << "Coroutine started\n";
    co_await std::suspend_always{};
    std::cout << "Resumed again!\n";
}

int main() {
    auto task = manualTask();
    std::cout << "Resuming coroutine...\n";
    task.resume();
}
