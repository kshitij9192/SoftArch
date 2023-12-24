#include <iostream>
#include <queue>
#include <mutex>

class DataBuffer
{
    std::queue<int> dataQueue;
    std::mutex mtx;

public:
    void push(int elem);
    int pop();
};