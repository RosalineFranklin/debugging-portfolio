#include <iostream>
#include <thread>
#include <vector>

int counter = 0;

void incrementCounter(int n) {
    for (int i = 0; i < n; ++i) {
        ++counter;  
    }
}

int main() {
    int numThreads = 2;
    int increments = 1000000;
    std::vector<std::thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(incrementCounter, increments);
    }

    for (auto &t : threads) {
        t.join();
    }

    std::cout << "Final counter value: " << counter << std::endl;
    return 0;
}
