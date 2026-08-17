#include "vector.hpp"
using namespace std;

Vector::Vector() {
    data = new int[1];
    size = 0;
    cap = 1;

}

void Vector::push_back (int x)  {
    if (size < cap) {
        data[size] = x;
        size += 1;
    } else if (size == cap) {
        int new_cap = cap * 2;
        //copy all old values over into new double buffer
        int* next = new int[new_cap];
        for (size_t i = 0; i < cap; ++i) {
            next[i] = data[i];
        }
        next[size] = x;

        delete[] data;
        data = next;
        cap = new_cap;
        size += 1;
    }
}

size_t Vector::get_size() const {
    return size;
}

size_t Vector::capacity() const {
    return cap;
}

int& Vector::operator[](size_t i) {
    return data[i];

}

Vector::~Vector() {
    delete[] data;
}