#include "lock_free_queue.hpp"

struct Dummy : Concurrent::Hook {};

int main() {
    Concurrent::ThreadSafeQueue<Dummy> q{};
    return 0;
}
