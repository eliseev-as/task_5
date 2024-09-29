#include <iostream>

#include "LinkedList.h"

int main() {
    LinkedList list;

    for (int i = 1; i <= 10; i++) {
        list.add();
    }

    std::cout << "Список до сортировки";
    for (int i = 1; i <= 10; i++) {
        std::cout << list.get(i) << ' ';
    }


    return 0;
}
