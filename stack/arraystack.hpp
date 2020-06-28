#ifndef ARRAYSTACK_HPP
#define ARRAYSTACK_HPP

#include "array.hpp"
#include "stack.hpp"

template<typename T>
class arrayStack : public stack
{
public:
    arrayStack()
    {
        array = new Array<T>(10);
    }

    arrayStack(int aCapacity)
    {
        array = new Array<T>(aCapacity);
    }

    int getSize()
    {
        return array->getSize();
    }

    bool isEmpty()
    {
        return array->isEmpty();
    }

    T pop()
    {
        return array->removeLast();
    }

    void push(T e)
    {
        array->addLast(e);
    }

    T peek()
    {
        array->getLast();
    }

    void print()
    {

    }
private:
    Array<T>* array;
}

#endif // ARRAYSTACK_HPP

