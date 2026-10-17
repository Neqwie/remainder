#include <iostream>
#include <string>

struct node {
    node* prev;
    int value;
};


class bck_fwd_list {
private:
    node* top;

public:

    bck_fwd_list() {
        top = nullptr;
    }

    ~bck_fwd_list() {
        while (top != nullptr) {
            node *temp = top;
            top = top->prev;
            delete temp;
        }
    }

    void push(int k) {
        node* n_node = new node();
        n_node->prev = top;
        n_node->value = k;
        top = n_node;
    }

    void pop() {
        if (top != nullptr) {
            node *temp = top;
            top = top->prev;
            delete temp;
        }
    }

    int get_top() {
        if (top != nullptr) {
            return top->value;
        } else {
            return 0;
        }
    }


};
