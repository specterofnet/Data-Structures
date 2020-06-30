#include <iostream>
#include "arraystack.hpp"

using namespace std;

int main()
{
    ArrayStack<int> *arraystack = new ArrayStack<int>(10);
    for(int i = 0; i < 5; ++i)
    {
        arraystack->push(i);
        arraystack->print();
    }
    std::cout << arraystack->pop() << std::endl;
    arraystack->print();

    return 0;
}

