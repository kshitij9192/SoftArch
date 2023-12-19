#include <iostream>
#include <queue>

class DataBuffer
{
    std::queue<int> dataQueue;

public:
    void push(int elem);
    int pop();
}