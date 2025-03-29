#include <iostream>
#include <coroutine>

struct SimpleCoroutine {
    struct promise_type {
        SimpleCoroutine get_return_object() { return {}; }
        std::suspend_never initial_suspend() noexcept { return {}; }
        std::suspend_never final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
    };
};

SimpleCoroutine myCoroutine() {
    co_return;
}

int main() {
    myCoroutine();
    std::cout << "Coroutine executed.\n";
}
