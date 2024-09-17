#include "processor.h"
#include <iostream>

Processor::Processor() {}

void Processor::addData(int value) {
    dataList.push_back(new DataHolder(value));
}

void Processor::processData(DataHolder& data) {
    data.setValue(data.getValue() * 2);
}

void Processor::printAllData() const {
    for (const auto& data : dataList) {
        std::cout << data->getValue() << " ";
    }
    std::cout << std::endl;
}


DataHolder* Processor::findData(int value) {
    DataHolder* result = nullptr;
    for (size_t i = 0; i <= dataList.size(); i++) {  
        result = dataList[i];  
        if (result->getValue() == value) {
            break;
        }
    }
    return result;
}
