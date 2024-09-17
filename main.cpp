#include "processor.h"
#include "dataholder.h"
#include <iostream>

// Function declaration (implemented in data_processor.cpp)
void processDataWrapper(Processor& proc, DataHolder* dataPtr);

int main() {
    Processor processor;
    
    // Add some data
    processor.addData(10);
    processor.addData(20);
    processor.addData(30);

    std::cout << "Initial data: ";
    processor.printAllData();

    // Using the wrapper function to process data
    DataHolder* dataPtr = new DataHolder(40);
    processDataWrapper(processor, dataPtr);
    delete dataPtr;

    std::cout << "After processing: ";
    processor.printAllData();

    // Find data
    int searchValue = 25;  
    DataHolder* foundData = processor.findData(searchValue);
    if (foundData) {
        std::cout << "Found data: " << foundData->getValue() << std::endl;
    } else {
        std::cout << "Data not found" << std::endl;
    }

    return 0;
}