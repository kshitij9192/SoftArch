#include "DataBuffer.h"

int DataBuffer::pop()
{
    return dataQueue.pop();
}

void DataBuffer::push(int elem)
{
    dataQueue.push(elem);
}