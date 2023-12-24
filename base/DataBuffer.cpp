#include "DataBuffer.h"

int DataBuffer::pop()
{
    std::scoped_lock lock {mtx};
    int data = dataQueue.front();
    dataQueue.pop();

    return data;
}

void DataBuffer::push(int elem)
{
    std::scoped_lock lock {mtx};
    dataQueue.push(elem);
}