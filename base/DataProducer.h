#include <iostream>
#include "DataBuffer.h"

class DataProducer
{
    DataBuffer& dataBuffer;
    std::string producerName;
    public:
    DataProducer(std::string& name, DataBuffer& dB);

    int generateData();
    void pushDataToBuffer();

}