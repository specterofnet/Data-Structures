#include <iostream>
#include "arrayqueue.hpp"

using namespace std;

int main()
{
    ArrayQueue<int> *queue = new ArrayQueue<int>(20);

    for(int i = 0; i < 10; ++i)
    {
        queue->enqueue(i);
        queue->print();
        if( i % 3 == 2)
        {
            queue->dequeue();
            queue->print();
        }
    }

    return 0;
}

