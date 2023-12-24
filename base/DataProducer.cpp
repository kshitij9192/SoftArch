#include "DataProducer.h"
#include <vector>

DataProducer::DataProducer(std::string& name, DataBuffer& dB) : producerName(name), dataBuffer(dB)
{

}

void DataProducer::pushDataToBuffer()
{
    int num = generateData();
    dataBuffer.push(num);
}

int DataProducer::generateData()
{

}