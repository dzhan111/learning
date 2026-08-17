#include <cstddef>
using namespace std;
class Vector { 
        int* data;
        size_t size;
        size_t cap;
    public: 
        Vector();
        ~Vector();

        void push_back(int x);
        int& operator[](std::size_t i);
        size_t get_size() const;
        size_t capacity() const;

};