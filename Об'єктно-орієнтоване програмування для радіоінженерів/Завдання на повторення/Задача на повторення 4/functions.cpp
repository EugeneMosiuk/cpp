#include "functions.h"
#include <iostream>
#include <map>

using namespace std;

int findSameElements(int* Arr1, int size1, int* Arr2, int size2)
{

    if(!PtrChecker(Arr1) || !PtrChecker(Arr2))
        return 1;

    if(size1 > 20 || size1 < 1 ||
         size2 > 20 || size2 < 1)
    {
        cout<<"Wrong array size"<<endl;
        return 1;
    }
        map<int,int> myMap;
        int numb, count;
        for(int i = 0; i < size1; i++)
        {
            numb = 0;
            count = 0;
            for(int j = 0; j < size2; j++)
            {
                numb = Arr1[i];
                if(numb == Arr2[j])
                    count++;
            }
            if(count > 0)
                myMap.emplace(numb, count);
        }
        for(auto it=myMap.begin(); it!=myMap.end(); it++)
            cout<<it->first<<" - "<<it->second<<endl;
    return 0;
}
void UserFill(int* arr, int size)
{
    cout<<"Filling start"<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<"Element #"<<1+i<<" = ";
        cin>>arr[i];
    }
    cout<<"Filling completed"<<endl;
}
bool PtrChecker(int* ptr)
{
    if(ptr == nullptr)
    {
        cout<<"Wrong array data"<<endl;
        return false;
    }
    return true;
}