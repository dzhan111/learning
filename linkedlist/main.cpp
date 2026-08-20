#include <iostream>
#include <cstddef>
#include <vector>
// #include "ll.hpp"


using namespace std;

struct node {
    int value;
    node* next;
};

int main() {
    cout << "delcare a linked list" << endl;

    vector<node*> cache;
    node* head = new node{0,nullptr};
    node* temp = head;
    cache.push_back(head);

    for (size_t i = 1; i < 10; i ++ ) {
        temp->next = new node{(int)i,nullptr};
        temp = temp->next;
        cache.push_back(temp);
        // cout << "new temp value: " << endl;
        // cout << temp->value << endl;
    }   

    cout << "print out numbers in cache: " << endl;
    for (const auto & elem: cache) {
        cout << elem->value << endl;
    }

    for (auto & elem: cache) {
        cout << "deleting " << elem->value << endl;
        delete elem;
        elem = nullptr;
        // cout << "deleted " << elem->value << endl;
    }

    // for (const auto & elem: cache) {
    //     if (elem != nullptr) {
    //         cout << "not fully deleted" << endl;
    //         cout << elem->value << endl;
    //         return 1;
    //     }
    // }


    //delete 
    // head->value = 0;
    // head->next = nullptr;
    cout << "fully deleted" << endl;

    return 0;
}