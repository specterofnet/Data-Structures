#ifndef QUEUE_HPP
#define QUEUE_HPP

template<typename T>
class Queue
{
public:
    virtual void enqueue(T e)=0;
    virtual T dequeue()=0;
    virtual int getSize()=0;
    virtual bool isEmpty()=0;
    virtual T getFront()=0;
};

#endif // QUEUE_HPP

