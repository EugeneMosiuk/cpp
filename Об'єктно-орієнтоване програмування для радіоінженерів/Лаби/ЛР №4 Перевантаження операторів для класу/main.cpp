#include <iostream>
#include "array.h"

int main() {
    Array arr1, arr2;
    arr1.setValue(44);
    arr1.setValue(44);
    arr1.setValue(44);
    arr1.setValue(33);
    arr1.setValue(33);
    arr1.setValue(33);
    arr2.setValue(44);
    arr2.setValue(44);
    arr2.setValue(44);
    arr2.setValue(33);
    arr2.setValue(33);
    arr2.setValue(33);

    if (arr1 == arr2) {
        std::cout << "Eq" << std::endl;
    }

    if (arr1 != arr2) {
        std::cout << "Not Eq" << std::endl;
    }

    Array arr3 = arr1 + arr2;

    std::cout << "arr3: " << arr3;

    return 0;
}