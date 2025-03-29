#include <iostream>
#include <coroutine>

struct ReturnObject {
    struct promise_type {
        int value;

        ReturnObject get_return_object() { return ReturnObject{this}; }
        std::suspend_never initial_suspend() { return {}; }
        std::suspend_never final_suspend() noexcept { return {}; }
        void return_value(int v) { value = v; }
        void unhandled_exception() { std::terminate(); }
    };

    std::coroutine_handle<promise_type> handle;

    ReturnObject(promise_type* p) : handle(std::coroutine_handle<promise_type>::from_promise(*p)) {}
    ~ReturnObject() { handle.destroy(); }

    int get() { return handle.promise().value; }
};

ReturnObject computeValue() {
    co_return 42;
}

int main() {
    auto result = computeValue();
    std::cout << "Computed Value: " << result.get() << '\n';
}
