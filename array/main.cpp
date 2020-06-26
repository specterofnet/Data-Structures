#include <iostream>
#include "array.hpp"

using namespace std;

int main()
{
    Array<int> myArray;

    for(int i=0; i<10; ++i)
    {
        myArray.addLast(i);
    }
    myArray.print();
    myArray.add(1, 100);
    myArray.print();
    myArray.addFirst(-1);
    myArray.print();
    myArray.remove(2);
    myArray.print();
    myArray.removeElementOne(5);
    myArray.print();
    myArray.removeLast();
    myArray.print();
    myArray.removeFirst();
    myArray.print();
    for(int i=0; i<4; ++i)
    {
        myArray.removeLast();
        myArray.print();
    }

    return 0;
}

