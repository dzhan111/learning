#include <iostream>
#include "vector.hpp"

using namespace std;
//clang++ -std=c++17 -o vectr vector.cpp main.cpp

int main() {

    Vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << v.get_size() << '\n';
    cout << v[0] << v[1] << v[2] << '\n';
    return 0;
}