//
// Created by Alexander Eliseev on 29.09.2024.
//

#ifndef NODE_H
#define NODE_H


class Node {
public:
    int value;
    Node *next;

    explicit Node(const int value) {
        this->value = value;
        this->next = nullptr;
    }
};


#endif //NODE_H
