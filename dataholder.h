#ifndef DATAHOLDER_H
#define DATAHOLDER_H

class DataHolder {
public:
    DataHolder(int value);
    int getValue() const;
    void setValue(int value);

private:
    int value;
};

#endif // DATAHOLDER_H