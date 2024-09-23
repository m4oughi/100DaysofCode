#include <iostream>
#include <coroutine>

template <typename T>
struct Generator {
    struct promise_type {
        T current_value;
        auto get_return_object() { return Generator{this}; }
        auto initial_suspend() { return std::suspend_always{}; }
        auto final_suspend() noexcept { return std::suspend_always{}; }
        void unhandled_exception() { std::terminate(); }
        auto yield_value(T value) {
            current_value = value;
            return std::suspend_always{};
        }
        void return_void() {}
    };

    using handle_type = std::coroutine_handle<promise_type>;
    handle_type coro;

    Generator(handle_type h) : coro(h) {}
    ~Generator() { if (coro) coro.destroy(); }

    T next() {
        coro.resume();
        return coro.promise().current_value;
    }
};

Generator<int> generateNumbers() {
    for (int i = 0; i < 5; ++i) {
        co_yield i;
    }
}

int main() {
    auto gen = generateNumbers();
    for (int i = 0; i < 5; ++i) {
        std::cout << gen.next() << " "; // Outputs: 0 1 2 3 4
    }
    return 0;
}
