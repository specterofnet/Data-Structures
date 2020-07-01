#ifndef QUEUE_HPP
#define QUEUE_HPP

template<typename T>
class Queue
{
public:
    virtual void enqueue(T e);
    virtual T dequeue();
    virtual int getSize();
    virtual bool isEmpty();
    virtual T getFront();
}

#endif // QUEUE_HPP

