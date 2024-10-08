//
// Created by Alexander Eliseev on 29.09.2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include <stdexcept>

#include "Node.h"

class LinkedList {
private:
    Node *head;
    int size;

public:
    LinkedList() {
        head = nullptr;
        size = 0;
    }

    void add(const int value) {
        const auto new_node = new Node(value);
        if (head == nullptr) {
            head = new_node;
        } else {
            Node *current = head;
            while (current->next != nullptr) {
                current = current->next;
            }

            current->next = new_node;
        }
        size++;
    }

    [[nodiscard]] int get(const int index) const {
        if (index >= size || index < 0) {
            throw std::invalid_argument("index out of range");
        }

        auto current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->value;
    }

    [[nodiscard]] int get_size() const {
        return size;
    }

    void insertion_sort() {
        Node *current = head;
        Node *result = nullptr;

        while (current != nullptr) {
            Node *next = current->next;

            if (result == nullptr || current->value <= result->value) {
                current->next = result;
                result = current;
            } else {
                Node *temp = result;
                while (temp->next != nullptr && current->value > temp->next->value) {
                    temp = temp->next;
                }

                current->next = temp->next;
                temp->next = current;
            }

            current = next;
        }

        head = result;
    }
};


#endif //LINKEDLIST_H
