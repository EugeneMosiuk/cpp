#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
public:
    Array(int size = 10, int step = 5);
    Array(const Array& other);
    ~Array();

    Array& operator=(const Array& other);
    Array operator+(const Array& other) const;
    Array operator+(int value) const;
    Array operator-(int value) const;
    bool operator==(const Array& other) const;
    bool operator!=(const Array& other) const;
    Array& operator++();
    Array operator++(int);
    Array& operator+=(int value);
    int& operator[](int index) const;
    friend Array operator+(int value, const Array& arr);
    friend std::ostream& operator<<(std::ostream& os, const Array& arr);

    void showElements() const;
    void expandArray(int size);
    int getSize() const;
    int getElemSize() const;
    void setValue(int val);
    void setArray(int *pArr, int size);

private:
    int initialSize;
    int expandStep;
    int *arrayPtr;
    int currentIdx;
};

#endif // ARRAY_H