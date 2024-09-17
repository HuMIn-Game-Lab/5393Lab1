#include "processor.h"
#include "dataholder.h"

void processDataWrapper(Processor& proc, DataHolder* dataPtr) {
    proc.processData(dataPtr); 
}