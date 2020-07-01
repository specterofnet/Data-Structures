#ifndef ARRAY_H
#define ARRAY_H

template<typename T>
class Array
{
public:
    Array() : mSize(0), mCapacity(10)
    {
        mData = new T[10];
    }

    Array(int aCapacity) : mSize(0) , mCapacity(aCapacity)
    {
        mData = new T[aCapacity];
    }

    virtual ~Array()
    {
        delete mData;
    }

    const int getCapacity() const
    {
        return mCapacity;
    }

    const int getSize() const
    {
        return mSize;
    }

    bool isEmpty() const
    {
        return mSize == 0;
    }

    void add(int index, T e)
    {
        if(index < 0 || index > mSize)
        {
            printf("Index over bound");
            return;
        }

        if(mSize == mCapacity)
        {
            resize(2*mCapacity);
        }

        for(int i = mSize; i >= index; --i)
        {
            mData[i] = mData[i-1];
        }
        mData[index] = e;
        mSize++;
    }

    void addFirst(T e)
    {
        add(0, e);
    }

    void addLast(T e)
    {
        add(mSize, e);
    }

    T get(int index) const
    {
        if(index < 0 || index >= mSize)
        {
            printf("Index over bound");
            return NULL;
        }

        return mData[index];
    }

    T getFirst()
    {
        return mData[0];
    }

    T getLast()
    {
        return mData[mSize-1];
    }

    void set(int index, T e)
    {
        if(index < 0 || index >= mSize)
        {
            printf("Index over bound");
            return;
        }

        mData[index] = e;
    }

    bool contains(T e)
    {
        bool ret = false;

        for(int i = 0; i < mSize; ++i)
        {
            if(e == mData[i])
            {
                ret = true;
            }
        }

        return ret;
    }

    int find(T e)
    {
        int ret = -1;

        for(int i = 0; i < mSize; ++i)
        {
            if(e == mData[i])
            {
                ret = i;
            }
        }

        return ret;
    }

    T remove(int index)
    {
        T ret;

        if(index < 0 || index >= mSize)
        {
            printf("Index over bound");
            return NULL;
        }
        ret = mData[index];
        for(int i = index; i < mSize; ++i)
        {
            mData[i] = mData[i+1];
        }
        mSize--;
        if( (mSize == mCapacity / 4) && 0 != mCapacity / 2)
        {
            resize(mCapacity / 2);
        }

        return ret;
    }

    T removeFirst()
    {
        return remove(0);
    }

    T removeLast()
    {
        return remove(mSize-1);
    }

    bool removeElementOne(T e)
    {
        bool ret = true;
        int index = find(e);

        if( index != -1)
        {
            remove(index);
        }
        else
        {
            ret = false;
        }

        return ret;
    }

    void removeElementAll(T e)
    {
        while( removeElementOne(e) != -1 )
        {

        }
    }

    void print()
    {
        std::cout << "Array: size=" << mSize << "capacity=" << mCapacity << std::endl;
        std::cout << "[";
        for(int i = 0; i < mSize; ++i)
        {
            std::cout << mData[i];
            if(i != mSize - 1)
            {
                std::cout << ",";
            }
        }
        std::cout << "]";
        std::cout << std::endl;
    }

private:
    void resize(int aNewCapacity)
    {
        T *newData = new T[aNewCapacity];

        for( int i=0; i < mSize; ++i)
        {
            newData[i] = mData[i];
        }

        mData = newData;
        mCapacity = aNewCapacity;
    }

private:
    T *mData;
    int mSize;
    int mCapacity;
};

#endif // ARRAY_H
