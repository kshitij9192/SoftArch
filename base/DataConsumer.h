#include <iostream>
#include "DataBuffer.h"

class DataConsumer
{
    DataBuffer& dataBuffer;
    std::string consumerName;
    public:
    DataConsumer(std::string& name, DataBuffer& dB);
    void consumeData();

}