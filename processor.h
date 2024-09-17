#ifndef PROCESSOR_H
#define PROCESSOR_H

#include "dataholder.h"
#include <vector>

class Processor {
public:
    Processor();
    void addData(int value);
    void processData(DataHolder& data);  
    void printAllData() const;
    DataHolder* findData(int value);

private:
    std::vector<DataHolder*> dataList;
};

#endif // PROCESSOR_H