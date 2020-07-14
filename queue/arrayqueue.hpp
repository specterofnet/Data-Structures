#ifndef ARRAYQUEUE_HPP
#define ARRAYQUEUE_HPP

#include "array.hpp"
#include "queue.hpp"

template<typename T>
class ArrayQueue : public Queue<T>
{
public:
    ArrayQueue(int aCapacity)
    {
        array = new Array<T>(aCapacity);
    }

    ArrayQueue()
    {
        array = new Array<T>();
    }

    virtual ~ArrayQueue()
    {
        delete array;
        array = NULL;
    }

    void enqueue(T e)
    {
        array->addLast(e);
    }

    T dequeue()
    {
        return array->removeFirst();
    }

    int getSize()
    {
        return array->getSize();
    }

    bool isEmpty()
    {
        return array->isEmpty();
    }

    T getFront()
    {
        return array->getFirst();
    }

    void print()
    {
        std::cout << "ArrayQueue: size=" << array->getSize() << std::endl;
        std::cout << "head [";
        for(int i = 0; i < array->getSize(); ++i)
        {
            std::cout << array->get(i);
            if(i != array->getSize() - 1)
            {
                std::cout << ",";
            }
        }
        std::cout << "] tail";
        std::cout << std::endl;
    }

private:

    Array<T>* array;
};

#endif // ARRAYQUEUE_HPP

