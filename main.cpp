#include <iostream>
#include <random>
#include "LinkedList.h"

int main() {
    LinkedList list;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 100);

    for (int i = 1; i <= 10; i++) {
        list.add(distrib(gen));
    }

    std::cout << "Список до сортировки";
    for (int i = 1; i <= 10; i++) {
        std::cout << list.get(i) << ' ';
    }


    return 0;
}
