#include <iostream>
#include <map>
#include <ctime>
#include "functions.h"

using namespace std;

int main()
{
    srand(time(NULL));
    int fArrSize = 0, sArrSize = 0;
    int *fArr = nullptr, *sArr = nullptr;
    cout<<"Enter first array size: ";
    cin>>fArrSize;
    cout<<"Enter second array size: ";
    cin>>sArrSize;

    fArr = new int[fArrSize];
    sArr = new int[sArrSize];

    UserFill(fArr, fArrSize);
    UserFill(sArr, sArrSize);

    findSameElements(fArr, fArrSize, sArr, sArrSize);
    delete[] fArr;
    delete[] sArr;

    return 0;
}