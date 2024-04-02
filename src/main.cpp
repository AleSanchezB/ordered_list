#include <iostream>
#include <time.h>
#include "headers/OrderedList.hpp"

int main() {
    srand(time(nullptr));
    std::cout << "Hello, $project!" << std::endl;
    OrderedList<int> l;
    for (int i = 1; i < 6; ++i) {
        l.add(i % rand() * (rand() % 10 + 1));
        l.printForward();
    } 
    return 0;
}
