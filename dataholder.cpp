#include "dataholder.h"

DataHolder::DataHolder(int value) : value(value) {}

int DataHolder::getValue() const { return value; }

void DataHolder::setValue(int value) { this->value = value; }