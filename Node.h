//
// Created by Alexander Eliseev on 29.09.2024.
//

#ifndef NODE_H
#define NODE_H


class Node {
public:
    int data;
    Node *next;

    explicit Node(const int data) {
        this->data = data;
        this->next = nullptr;
    }
};


#endif //NODE_H
