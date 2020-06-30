#ifndef ARRAYSTACK_HPP
#define ARRAYSTACK_HPP

#include "array.hpp"
#include "stack.hpp"

template<typename T>
class ArrayStack : public Stack<T>
{
public:
    ArrayStack()
    {
        array = new Array<T>(10);
    }

    ArrayStack(int aCapacity)
    {
        array = new Array<T>(aCapacity);
    }

    virtual ~ArrayStack()
    {
        delete array;
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
        std::cout << "Stack:";
        std::cout << "[";
        for(int i = 0; i < array->getSize(); ++i)
        {
            std::cout << array->get(i);
            if(i != array->getSize() - 1)
            {
                std::cout << ",";
            }
        }
        std::cout << "] top";
        std::cout << std::endl;
    }
private:
    Array<T>* array;
};

#endif // ArrayStack_HPP

