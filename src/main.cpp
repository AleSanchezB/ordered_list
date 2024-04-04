#include <iostream>
#include <time.h>
#include "headers/OrderedList.hpp"

int main() {
    srand(time(nullptr));
     std::cout << "Hello, $project!" << std::endl;
     OrderedList<int> l, l2;
    for (int i = 1; i < 6; ++i) {
        l.add(i % rand() * (rand() % 10 + 1)); 
        l2.add(i % rand() * (rand() % 10 + 1));
        //l.printForward(); 
        //l.printBackwards();
    }
    l.add(1);
    l.add(1);
    l.printForward();
    l.pop();
    l.printForward();
    l.pop();
    l.printForward();
    OrderedList<int> l3 = l.merge(l2);
    l3.printForward();  
    
    //l.printBackwards();
    return 0;
}
 
   
