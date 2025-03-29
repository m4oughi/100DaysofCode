#include <iostream>
#include <coroutine>

struct Generator {
    struct promise_type {
        int current_value;

        Generator get_return_object() { return Generator{this}; }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }
        std::suspend_always yield_value(int value) {
            current_value = value;
            return {};
        }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
    };

    std::coroutine_handle<promise_type> handle;

    Generator(promise_type* p) : handle(std::coroutine_handle<promise_type>::from_promise(*p)) {}
    ~Generator() { handle.destroy(); }

    bool move_next() {
        handle.resume();
        return !handle.done();
    }

    int current_value() { return handle.promise().current_value; }
};

Generator numberGenerator() {
    for (int i = 1; i <= 5; ++i)
        co_yield i;
}

int main() {
    Generator gen = numberGenerator();
    while (gen.move_next()) {
        std::cout << gen.current_value() << " ";
    }
    std::cout << '\n';
}
