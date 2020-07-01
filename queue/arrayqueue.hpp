#ifndef ARRAYQUEUE_HPP
#define ARRAYQUEUE_HPP

#include "array.hpp"
#include "Queue.hpp"

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
    }

private:

    Array<T>* array;
}
#endif // ARRAYQUEUE_HPP

