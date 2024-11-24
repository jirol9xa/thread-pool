#pragma once

#include <atomic>
#include <cstddef>
#include <mutex>
#include <type_traits>

namespace Concurrent {
    struct Hook {
        Hook* next;
    };

    // Lock free intrusive queue
    template <typename T>
        requires std::derived_from<T, Hook>
    class ThreadSafeQueue {
        std::atomic<T*> head = nullptr;
        std::atomic<T*> tail = nullptr;
        std::atomic<int> size = 0;

    public:

        void Push(T* elem) {
            
        }
    };
} // namespace Concurrent