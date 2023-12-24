#include "DataConsumer.h"

DataConsumer::DataConsumer(std::string& name, DataBuffer& dB) : consumerName(name), dataBuffer(dB)
{

}

void DataConsumer::consumeData()
{
    int data = dataBuffer.pop();
}