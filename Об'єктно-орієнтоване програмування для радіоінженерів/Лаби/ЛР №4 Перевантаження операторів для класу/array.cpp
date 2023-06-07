#include <iostream>
#include "array.h"

Array::Array(int size, int step) {
    initialSize = size > 0 ? size : 10;
    expandStep = step > 0 ? step : 5;
    arrayPtr = new int[initialSize];
    currentIdx = 0;
}

Array::Array(const Array& other) {
    initialSize = other.initialSize;
    expandStep = other.expandStep;
    currentIdx = other.currentIdx;
    arrayPtr = new int[initialSize];

    for (int i = 0; i < currentIdx; i++) {
        arrayPtr[i] = other.arrayPtr[i];
    }
}

Array::~Array() {
    delete[] arrayPtr;
}

Array& Array::operator=(const Array& other) {
    if (this != &other) {
        delete[] arrayPtr;

        initialSize = other.initialSize;
        expandStep = other.expandStep;
        currentIdx = other.currentIdx;
        arrayPtr = new int[initialSize];

        for (int i = 0; i < currentIdx; i++) {
            arrayPtr[i] = other.arrayPtr[i];
        }
    }

    return *this;
}

Array Array::operator+(const Array& other) const {
    Array result(currentIdx + other.currentIdx, expandStep);

    for (int i = 0; i < currentIdx; i++) {
        result.arrayPtr[i] = arrayPtr[i];
        result.currentIdx++;
    }

    for (int i = 0; i < other.currentIdx; i++) {
        result.arrayPtr[currentIdx + i] = other.arrayPtr[i];
        result.currentIdx++;
    }

    return result;
}

Array Array::operator+(int value) const {
    Array result(*this);

    for (int i = 0; i < currentIdx; i++) {
        result.arrayPtr[i] += value;
    }

    return result;
}

Array Array::operator-(int value) const {
    Array result(*this);

    for (int i = 0; i < currentIdx; i++) {
            result.arrayPtr[i] -= value;
}

return result;
}

bool Array::operator==(const Array& other) const {
if (currentIdx != other.currentIdx) {
return false;
}
for (int i = 0; i < currentIdx; i++) {
    if (arrayPtr[i] != other.arrayPtr[i]) {
        return false;
    }
}

return true;
}
bool Array::operator!=(const Array& other) const {
return !(*this == other);
}

Array& Array::operator++() {
for (int i = 0; i < currentIdx; i++) {
arrayPtr[i]++;
}
return *this;
}

Array Array::operator++(int) {
Array temp(*this);
++(*this);
return temp;
}

Array& Array::operator+=(int value) {
*this = *this + value;
return *this;
}

int& Array::operator[](int index) const {
if (index < 0 || index >= currentIdx) {
return arrayPtr[0];
}
return arrayPtr[index];
}

Array operator+(int value, const Array& arr) {
return arr + value;
}

std::ostream& operator<<(std::ostream& os, const Array& arr) {
arr.showElements();
return os;
}

void Array::showElements() const {
for (int i = 0; i < currentIdx; i++) {
std::cout << arrayPtr[i] << " ";
}
std::cout << std::endl;
}

void Array::expandArray(int size) {
int newSize = initialSize + size;
int *newArray = new int[newSize];
for (int i = 0; i < currentIdx; i++) {
    newArray[i] = arrayPtr[i];
}

delete[] arrayPtr;
arrayPtr = newArray;
initialSize = newSize;
}

int Array::getSize() const {
return initialSize;
}

int Array::getElemSize() const {
return currentIdx;
}

void Array::setValue(int val) {
if (currentIdx >= initialSize) {
expandArray(expandStep);
}
arrayPtr[currentIdx++] = val;
}

void Array::setArray(int *pArr, int size) {
for (int i = 0; i < size; i++) {
setValue(pArr[i]);
}
}