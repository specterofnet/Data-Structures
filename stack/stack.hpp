#ifndef STACK_HPP
#define STACK_HPP

template<typename T>
class stack
{
public:
    int getSize() = 0;
    bool isEmpty() = 0;
    T pop() = 0;
    void push(T e) = 0;
    T peek() = 0;
}

#endif // STACK_HPP

