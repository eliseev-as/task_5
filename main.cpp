#include <iostream>
#include <random>
#include "LinkedList.h"

int main() {
    LinkedList list;
    constexpr int count = 10;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 100);

    for (int i = 0; i < count; i++) {
        list.add(distrib(gen));
    }

    std::cout << "Список до сортировки:" << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout << list.get(i) << ' ';
    }
    std::cout << std::endl << std::string(list.get_size() * 3, '-') << std::endl;

    std::cout << "Список после сортировки:" << std::endl;
    list.insertion_sort();
    for (int i = 0; i < count; i++) {
        std::cout << list.get(i) << ' ';
    }

    return 0;
}
