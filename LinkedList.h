//
// Created by Alexander Eliseev on 29.09.2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include "Node.h"

class LinkedList {
private:
    Node *head;

public:
    LinkedList() {
        head = nullptr;
    }

    void add(const int value) {
        Node *new_node = new Node(value);
        if (head == nullptr) {
            head = new_node;
        } else {
            Node *current = head;
            while (current->next != nullptr) {
                current = current->next;
            }

            current->next = new_node;
        }
    }
};


#endif //LINKEDLIST_H
