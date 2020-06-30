#ifndef STACK_HPP
#define STACK_HPP

template<typename T>
class Stack
{
public:
    virtual int getSize() = 0;
    virtual bool isEmpty() = 0;
    virtual T pop() = 0;
    virtual void push(T e) = 0;
    virtual T peek() = 0;
};

#endif // STACK_HPP

